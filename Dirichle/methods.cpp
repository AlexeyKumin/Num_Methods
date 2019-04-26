int Jakobi(float **X, float **B, float e, int N, int n, int m, float h, float k)
{
    int s = 0;
    float es = 100;
    float **temp = new float*[n + 1];
    for (int i = 0; i < n + 1;i++)
        temp[i] = new float[m + 1]();

    float h2 = 1 / (h * h);
    float k2 = 1 / (k * k);
    while ((s < N) && (es > e))
    {
        es = 0;
        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
            {
                float htmp = h2 * (temp[i - 1][j] + temp[i + 1][j]);
                float ktmp = k2 * (temp[i][j - 1] + temp[i][j + 1]);
                X[i][j] = (-B[i][j] + htmp + ktmp)/ (2 * (h2 + k2) );
                if (es < abs(X[i][j] - temp[i][j]))
                    es = abs(X[i][j] - temp[i][j]);
            }
        s++;
        for (int i = 0; i < n + 1; i++)
            for (int j = 0; j < m + 1; j++)
               temp[i][j] = X[i][j];
    }

    for (int i = 0; i < n + 1; i++)
        delete[] temp[i];
    delete[] temp;

    return s;
}

int Zeidel(float **X, float **B, float e, int N, int n, int m, float h, float k)
{
    int s = 0;
    float es = 100;
    float h2 = 1 / (h * h);
    float k2 = 1 / (k * k);

    while ((s < N) && (es > e))
    {
        es = 0;
        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
            {
                float Vs = X[i][j];
                float htmp = h2 * (X[i - 1][j] + X[i + 1][j]);
                float ktmp = k2 * (X[i][j - 1] + X[i][j + 1]);
                X[i][j] = (-B[i][j] + htmp + ktmp)/ (2 * (h2 + k2));
                if (es < abs(X[i][j] - Vs))
                    es = abs(X[i][j] - Vs);
            }
        s++;
    }
    return s;
}

float sk(float **A, float **B, int n, int m)
{
    float sum = 0;
    for (int i = 1; i < n; i++)
        for (int j = 1; j < m; j++)
            sum += A[i][j] * B[i][j];
    return sum;
}

int Conjugate_gradient(float **X, float **B, float e, int N, int n, int m, float h, float k)
{
    int s = 0;
    float es = 100;
    float h2 = 1 / (h * h);
    float k2 = 1 / (k * k);

    float **Rs = new float*[n + 1];
    float **Zs = new float*[n + 1];
    float **AZs = new float*[n + 1];
    for (int i = 0; i < n + 1;i++)
    {
        Rs[i] = new float[m + 1]();
        Zs[i] = new float[m + 1]();
        AZs[i] = new float[m + 1]();
    }

    //начальное задание векторов
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            Rs[i][j] = B[i][j];
            Zs[i][j] = Rs[i][j];
        }
    }

    //цикл
    while ((s < N) && (es > e))
    {
        es = 0;
        //1)..............................
        float sk1 = sk(Rs, Rs, n, m);

        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
            {
                float htmp = h2 * (Zs[i - 1][j] + Zs[i + 1][j]);
                float ktmp = k2 * (Zs[i][j - 1] + Zs[i][j + 1]);
                AZs[i][j] = htmp + ktmp - 2 * (h2 + k2) * Zs[i][j];
            }
        float sk2 = sk(AZs, Zs, n ,m);
        //Coeff!!!!!!
        float a = sk1 / sk2;

        //2) X..............................
        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
            {
                float Xs = X[i][j];
                X[i][j] += a * Zs[i][j];
                if (es < abs(X[i][j] - Xs))
                    es = abs(X[i][j] - Xs);
            }
         //3) ....................
                        for (int i = 1; i < n; i++)
                            for (int j = 1; j < m; j++)
                                Rs[i][j] -= a * AZs[i][j];
                        //4)................
                        sk2 = sk(Rs,Rs,n,m);
                        float b = sk2 / sk1;
                        //5)...................
                        for (int i = 1; i < n; i++)
                            for (int j = 1; j < m; j++)
                                Zs[i][j] = Rs[i][j] + b * Zs[i][j];


        s++;
    }

    for (int i = 0; i < n + 1; i++)
    {
        delete[] Rs[i];
        delete[] Zs[i];
        delete[] AZs[i];
    }
    delete[] AZs;
    delete[] Rs;
    delete[] Zs;

    return s;
}
