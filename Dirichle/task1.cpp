#include "task1.h"

Task1::Task1(int n1, int m1, int N, double e, int num = 1)
{
    n = n1;
    m = m1;
    h = (2 - 1) / (double)n;
    k = (2 - 1) / (double)m;
    N_and_e = new double[2];
    N_and_e[0] = N;
    N_and_e[1] = e;

    X = new double*[n + 1];
    B = new double*[n + 1];
    for (int i = 0; i < n + 1;i++)
    {
        X[i] = new double[m + 1]();
        B[i] = new double[m + 1]();
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
        N_and_e = M.Jakobi(X, B, N_and_e, n, m, h, k);
        break;
    case 1:
        N_and_e = M.Zeidel(X, B, N_and_e, n, m, h, k);
        break;
    case 2:
        N_and_e = M.Conjugate_gradient(X, B, N_and_e, n, m, h, k);
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
