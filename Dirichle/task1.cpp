#include "task1.h"

Task1::Task1(int n1, int m1, int N, float e, int num = 1)
{
    n = n1;
    m = m1;
    h = (2 - 1) / (float)n;
    k = (2 - 1) / (float)m;
    X = new float*[n + 1];
    B = new float*[n + 1];
    for (int i = 0; i < n + 1;i++)
    {
        X[i] = new float[m + 1]();
        B[i] = new float[m + 1]();
    }

    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < m + 1; j++)
        {
            X[i][j] = 0;
            B[i][j] = -f(x(i),y(j));
            if (i - 1 == 0)
                B[i][j] -= mu1(y(j))/ (h * h);
            if (i + 1 == n)
                B[i][j] -= mu2(y(j)) / (h * h);
            if (j - 1 == 0)
                B[i][j] -= mu3(x(i)) / (k * k);
            if (j + 1 == m)
                B[i][j] -= mu4(x(i)) / (k * k);
        }
    Method M;

    switch (num) {
    case 0:
        s = M.Jakobi(X, B, e, N, n, m, h, k);
        break;
    case 1:
        s = M.Zeidel(X, B, e, N, n, m, h, k);
        break;
    case 2:
        s = M.Conjugate_gradient(X, B, e, N, n, m, h, k);
        break;
    }

    //Доооброботка
    for (int i = 0; i < n + 1; i++)
    {
        X[i][0] = mu3(x(i));
        X[i][m] = mu4(x(i));
    }
    for (int j = 0; j < m + 1; j++)
    {
        X[0][j] = mu1(y(j));
        X[n][j] = mu2(y(j));
    }
}

Task1::~Task1()
{
    for (int i = 0; i < n + 1; i++)
    {
        delete[] X[i];
        delete[] B[i];
    }
    delete[] X;
    delete[] B;
}
