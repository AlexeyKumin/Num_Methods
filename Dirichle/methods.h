#ifndef METHODS_H
#define METHODS_H
class Method
{
public:

double* Jakobi(double **X, double **B, double* N_and_e, int n, int m, double h, double k)
{
    int s = 0;
    double es = 100;
    double **temp = new double*[n + 1];
    for (int i = 0; i < n + 1;i++)
        temp[i] = new double[m + 1]();

    double h2 = 1 / (h * h);
    double k2 = 1 / (k * k);
    while ((s < N_and_e[0]) && (es > N_and_e[1]))
    {
        es = 0;
        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
            {
                double htmp = h2 * (temp[i - 1][j] + temp[i + 1][j]);
                double ktmp = k2 * (temp[i][j - 1] + temp[i][j + 1]);
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
    N_and_e[0] = s;
    N_and_e[1] = es;
    return N_and_e;
}

double* Zeidel(double **X, double **B, double* N_and_e, int n, int m, double h, double k)
{
    int s = 0;
    double es = 100;
    double h2 = 1 / (h * h);
    double k2 = 1 / (k * k);

    while ((s < N_and_e[0]) && (es > N_and_e[1]))
    {
        es = 0;
        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
            {
                double Vs = X[i][j];
                double htmp = h2 * (X[i - 1][j] + X[i + 1][j]);
                double ktmp = k2 * (X[i][j - 1] + X[i][j + 1]);
                X[i][j] = (-B[i][j] + htmp + ktmp)/ (2 * (h2 + k2));
                if (es < abs(X[i][j] - Vs))
                    es = abs(X[i][j] - Vs);
            }
        s++;
    }
    N_and_e[0] = s;
    N_and_e[1] = es;
    return N_and_e;
}

double sk(double **A, double **B, int n, int m)
{
    double sum = 0;
    for (int i = 1; i < n; i++)
        for (int j = 1; j < m; j++)
            sum += A[i][j] * B[i][j];
    return sum;
}

double* Conjugate_gradient(double **X, double **B, double* N_and_e, int n, int m, double h, double k)
{
    int s = 0;
    double es = 100;
    double h2 = 1 / (h * h);
    double k2 = 1 / (k * k);

    double **Rs = new double*[n + 1];
    double **Zs = new double*[n + 1];
    double **AZs = new double*[n + 1];
    for (int i = 0; i < n + 1;i++)
    {
        Rs[i] = new double[m + 1]();
        Zs[i] = new double[m + 1]();
        AZs[i] = new double[m + 1]();
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
    while ((s < N_and_e[0]) && (es > N_and_e[1]))
    {
        es = 0;
        //1)..............................
        double sk1 = sk(Rs, Rs, n, m);

        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
            {
                double htmp = h2 * (Zs[i - 1][j] + Zs[i + 1][j]);
                double ktmp = k2 * (Zs[i][j - 1] + Zs[i][j + 1]);
                AZs[i][j] = htmp + ktmp - 2 * (h2 + k2) * Zs[i][j];
            }
        double sk2 = sk(AZs, Zs, n ,m);
        //Coeff!!!!!!
        double a = sk1 / sk2;

        //2) X..............................
        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
            {
                double Xs = X[i][j];
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
                        double b = sk2 / sk1;
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

    N_and_e[0] = s;
    N_and_e[1] = es;
    return N_and_e;
}

double skn(double **A, double **B, int n, int m, int na, int ma)
{
    double sum = 0;
    for (int i = 1; i < na; i++)
        for (int j = 1; j < m; j++)
            sum += A[i][j] * B[i][j];
    for (int i = na; i < n; i++)
        for (int j = 1; j < ma; j++)
            sum += A[i][j] * B[i][j];
    return sum;
}

double skn1(double **A, double **B, int n1, int m1, int n2, int m2)
{
    double sum = 0;
    for (int i = 1; i < n1; i++)
        for (int j = 1; j < m1 + m2; j++)
            sum += A[i][j] * B[i][j];
    for (int i = n1; i < n1+ n2; i++)
        for (int j = 1; j < m1; j++)
            sum += A[i][j] * B[i][j];
    return sum;
}


double* Conjugate_gradient21(double **X, double **B, double* N_and_e, int n1, int m1,int n2, int m2, double h1, double k1, double h2, double k2)
{
    int s = 0;
    double es = 100;
    double h12 = 1 / (h1 * h1);
    double k12 = 1 / (k1 * k1);
    double h22 = 1 / (h2 * h2);
    double k22 = 1 / (k2 * k2);

    double **Rs = new double*[n1 + n2 + 1];
    double **Zs = new double*[n1 + n2 + 1];
    double **AZs = new double*[n1 + n2 + 1];
    for (int i = 0; i < n1 + 1;i++)
    {
        Rs[i] = new double[m1 + m2 + 1]();
        Zs[i] = new double[m1 + m2 + 1]();
        AZs[i] = new double[m1 + m2 + 1]();
    }
    for (int i = n1 + 1; i < n1 + n2 + 1;i++)
    {
        Rs[i] = new double[m1 + 1]();
        Zs[i] = new double[m1 + 1]();
        AZs[i] = new double[m1+ 1]();
    }

    //начальное задание векторов
    for (int i = 1; i < n1; i++)
        for (int j = 1; j < m1 + m2; j++)
        {
            Rs[i][j] = B[i][j];
            Zs[i][j] = Rs[i][j];
        }
    for (int i = n1; i < n1 + n2; i++)
        for (int j = 1; j < m1; j++)
        {
            Rs[i][j] = B[i][j];
            Zs[i][j] = Rs[i][j];
        }
    //цикл
    while ((s < N_and_e[0]) && (es > N_and_e[1]))
    {
        es = 0;
        //1)..............................
        double sk1 = skn1(Rs, Rs, n1, m1, n2, m2);
        for (int i = 1; i < n1 ; i++)
            for (int j = 1; j < m1; j++)
            {
                double htmp = h12 * (Zs[i - 1][j] + Zs[i + 1][j]);
                double ktmp = k12 * (Zs[i][j - 1] + Zs[i][j + 1]);
                AZs[i][j] = htmp + ktmp - 2 * (h12 + k12) * Zs[i][j];
            }
        //полоска сверху
        for (int i = 1; i < n1; i++)
        {
            double htmp = h12 * (Zs[i - 1][m1] + Zs[i + 1][m1]);
            double ktmp = 2 * Zs[i][m1 - 1] / (k1*(k1 + k2)) + 2 * Zs[i][m1 + 1]/(k2*(k1 + k2));
            AZs[i][m1] = htmp + ktmp - 2 * (h12 + 1/(k1*k2)) * Zs[i][m1];
        }
        //зона 2
        for (int i = 1; i < n1 ; i++)
            for (int j = m1 + 1 ; j < m1 + m2; j++)
            {
                double htmp = h12 * (Zs[i - 1][j] + Zs[i + 1][j]);
                double ktmp = k22 * (Zs[i][j - 1] + Zs[i][j + 1]);
                AZs[i][j] = htmp + ktmp -  2 * (h12 + k22) * Zs[i][j];
            }
        //полоска по вертикали
        for (int j = 1; j < m1; j++)
        {
            double htmp = 2 * Zs[n1 - 1][j] / (h1*(h1 + h2)) + 2 * Zs[n1 + 1][j]/(h2*(h1 + h2));
            double ktmp = k12 * (Zs[n1][j - 1] + Zs[n1][j + 1]);
            AZs[n1][j] =  htmp + ktmp - 2 * (1/(h1*h2) + k12) * Zs[n1][j];
        }

        for (int i = n1 + 1; i < n1 + n2; i++)
            for (int j = 1; j < m1; j++)
            {
                double htmp = h22 * (Zs[i - 1][j] + Zs[i + 1][j]);
                double ktmp = k12 * (Zs[i][j - 1] + Zs[i][j + 1]);
                AZs[i][j] = htmp + ktmp - 2 * (h22 + k12) * Zs[i][j];
            }

        double sk2 = skn1(AZs, Zs, n1 ,m1, n2, m2);
        //Coeff!!!!!!
        double a = sk1 / sk2;

        //2) X..............................
        for (int i = 1; i < n1; i++)
            for (int j = 1; j < m1 + m2; j++)
            {
                double Xs = X[i][j];
                X[i][j] += a * Zs[i][j];
                if (es < abs(X[i][j] - Xs))
                    es = abs(X[i][j] - Xs);
            }
        for (int i = n1; i < n1 + n2; i++)
            for (int j = 1; j < m1; j++)
            {
                double Xs = X[i][j];
                X[i][j] += a * Zs[i][j];
                if (es < abs(X[i][j] - Xs))
                    es = abs(X[i][j] - Xs);
            }

        //3) ....................
        for (int i = 1; i < n1; i++)
            for (int j = 1; j < m1 + m2 ;j++)
                Rs[i][j] -= a * AZs[i][j];
        for (int i = n1; i < n1 + n2; i++)
            for (int j = 1; j < m1; j++)
                Rs[i][j] -= a * AZs[i][j];

        //4)................
        sk2 = skn1(Rs,Rs,n1,m1, n2, m2);
        double b = sk2 / sk1;
        //5)...................
        for (int i = 1; i < n1; i++)
            for (int j = 1; j < m1 + m2; j++)
                Zs[i][j] = Rs[i][j] + b * Zs[i][j];
        for (int i = n1; i < n1 + n2; i++)
            for (int j = 1; j < m1; j++)
                Zs[i][j] = Rs[i][j] + b * Zs[i][j];


        s++;
    }

    for (int i = 0; i < n1 + n2 + 1; i++)
    {
        delete[] Rs[i];
        delete[] Zs[i];
        delete[] AZs[i];
    }
    delete[] AZs;
    delete[] Rs;
    delete[] Zs;

    N_and_e[0] = s;
    N_and_e[1] = es;
    return N_and_e;
}


double* Zeidel2(double **X, double **B, double* N_and_e, int n, int m,int na, int ma, double h, double k)
{
    int s = 0;
    double es = 100;
    double h2 = 1 / (h * h);
    double k2 = 1 / (k * k);

     while ((s < N_and_e[0]) && (es > N_and_e[1]))
    {
        es = 0;
        for (int i = 1; i < na; i++)
            for (int j = 1; j < m; j++)
            {
                double Vs = X[i][j];
                double htmp = h2 * (X[i - 1][j] + X[i + 1][j]);
                double ktmp = k2 * (X[i][j - 1] + X[i][j + 1]);
                X[i][j] = (-B[i][j] + htmp + ktmp)/ (2 * (h2 + k2));
                if (es < abs(X[i][j] - Vs))
                    es = abs(X[i][j] - Vs);
            }
        for (int i = na; i < n; i++)
            for (int j = 1; j < ma; j++)
            {
                double Vs = X[i][j];
                double htmp = h2 * (X[i - 1][j] + X[i + 1][j]);
                double ktmp = k2 * (X[i][j - 1] + X[i][j + 1]);
                X[i][j] = (-B[i][j] + htmp + ktmp)/ (2 * (h2 + k2));
                if (es < abs(X[i][j] - Vs))
                    es = abs(X[i][j] - Vs);
            }
        s++;
    }

     N_and_e[0] = s;
     N_and_e[1] = es;
     return N_and_e;
}

double* Zeidel21(double **X, double **B, double* N_and_e, int n1, int m1,int n2, int m2, double h1, double k1, double h2, double k2)
{
    int s = 0;
    double es = 100;
    double h12 = 1 / (h1 * h1);
    double k12 = 1 / (k1 * k1);
    double h22 = 1 / (h2 * h2);
    double k22 = 1 / (k2 * k2);

    while ((s < N_and_e[0]) && (es > N_and_e[1]))
    {
        es = 0;
        //зона 1
        for (int i = 1; i < n1 ; i++)
            for (int j = 1; j < m1; j++)
            {
                double Vs = X[i][j];
                double htmp = h12 * (X[i - 1][j] + X[i + 1][j]);
                double ktmp = k12 * (X[i][j - 1] + X[i][j + 1]);
                X[i][j] = (-B[i][j] + htmp + ktmp)/ (2 * (h12 + k12));
                if (es < abs(X[i][j] - Vs))
                    es = abs(X[i][j] - Vs);
            }
        //полоска сверху
        for (int i = 1; i < n1; i++)
        {
            double Vs = X[i][m1];
            double htmp = h12 * (X[i - 1][m1] + X[i + 1][m1]);
            double ktmp = 2 * X[i][m1 - 1] / (k1*(k1 + k2)) + 2 * X[i][m1 + 1]/(k2*(k1 + k2));
            X[i][m1] = (-B[i][m1] + htmp + ktmp)/ (2 * (h12 + 1/(k1*k2)));
            if (es < abs(X[i][m1] - Vs))
                es = abs(X[i][m1] - Vs);
        }
        //зона 2
        for (int i = 1; i < n1 ; i++)
            for (int j = m1 + 1 ; j < m1 + m2; j++)
            {
                double Vs = X[i][j];
                double htmp = h12 * (X[i - 1][j] + X[i + 1][j]);
                double ktmp = k22 * (X[i][j - 1] + X[i][j + 1]);
                X[i][j] = (-B[i][j] + htmp + ktmp)/ (2 * (h12 + k22));
                if (es < abs(X[i][j] - Vs))
                    es = abs(X[i][j] - Vs);
            }
        //полоска по вертикали
        for (int j = 1; j < m1; j++)
        {
            double Vs = X[n1][j];
            double htmp = 2 * X[n1 - 1][j] / (h1*(h1 + h2)) + 2 * X[n1 + 1][j]/(h2*(h1 + h2));
            double ktmp = k12 * (X[n1][j - 1] + X[n1][j + 1]);
            X[n1][j] = (-B[n1][j] + htmp + ktmp)/ (2 * (1/(h1*h2) + k12));
            if (es < abs(X[n1][j] - Vs))
                es = abs(X[n1][j] - Vs);
        }

        for (int i = n1; i < n1 + n2; i++)
            for (int j = 1; j < m1; j++)
            {
                double Vs = X[i][j];
                double htmp = h22 * (X[i - 1][j] + X[i + 1][j]);
                double ktmp = k12 * (X[i][j - 1] + X[i][j + 1]);
                X[i][j] = (-B[i][j] + htmp + ktmp)/ (2 * (h22 + k12));
                if (es < abs(X[i][j] - Vs))
                    es = abs(X[i][j] - Vs);
            }
        s++;
}
    N_and_e[0] = s;
    N_and_e[1] = es;
    return N_and_e;
}
};

#endif // METHODS_H
