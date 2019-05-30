#include "task2.h"

Task2::Task2(int n11, int m11, int N, double e, int num)
{
    n = n11;
    m = m11;
    h = (2 - 1) / (double)n;
    k = (2 - 1) / (double)m;
    na = 0;
    ma = 0;

    n2 = n11/2;
    n1 = n11 - n2;
    m2 = m11/2;
    m1 = m11 - m2;

    h1 = (1.5 - 1) / (double)n1;
    k1 = (1.5 - 1) / (double)m1;
    h2 = (2 - 1.5) / (double)n2;
    k2 = (2 - 1.5) / (double)m2;

    double inc = 1.5 - x(na);
    while (inc + 0.000001 > h)
    {
        na++;
        inc = 1.5 - x(na);
    }
    a = 1.5 - x(na-1);

     while (1.5 - y(ma) + 0.000001 > h)
        ma++;
    b = 1.5 - y(ma-1);

    Xr = new double*[n1 + n2 + 1];
    X = new double*[n1 + n2 + 1];
    B = new double*[n1 + n2 + 1];

    for (int i = 0; i < n1 + 1;i++)
    {
        Xr[i] = new double[m1 + m2 + 1]();
        X[i] = new double[m1 + m2 + 1]();
        B[i] = new double[m1 + m2 + 1]();
    }
    for (int i = n1 + 1; i < n1 + n2 + 1; i++)
    {
        Xr[i] = new double[m1 + 1]();
        X[i] = new double[m1 + 1]();
        B[i] = new double[m1 + 1]();
    }

    for (int i = 0; i < n1; i++)
        for (int j = 0; j < m1; j++)
        {
            X[i][j] = 0;
            Xr[i][j] = u(x(i), y(j));
            B[i][j] = -f(x(i),y(j));
            if (i - 1 == 0)
                B[i][j] -= u(x(0),y(j))/ (h1 * h1);
            if (j - 1 == 0)
                B[i][j] -= u(x(i),y(0)) / (k1 * k1);
        }

    for (int i = 0; i < n1 + 1; i++)
        for (int j = m1; j < m1 + m2 + 1; j++)
        {
            X[i][j] = 0;
            Xr[i][j] = u(x(i), y(j));
            B[i][j] = -f(x(i),y(j));
            if (i - 1 == 0)
                B[i][j] -= u(x(0),y(j))/ (h1 * h1);
            if (j + 1 == m1 + m2)
                B[i][j] -= u(x(i),y(m1 + m2)) / (k2 * k2);
            if (i + 1 == n1)
                B[i][j] -= u(x(n1),y(j)) / (h1 * h1);
        }


    for (int i = n1; i < n1 + n2 + 1; i++)
        for (int j = 0; j < m1 + 1; j++)
        {
            X[i][j] = 0;
            Xr[i][j] = u(x(i), y(j));
            B[i][j] = -f(x(i),y(j));
            if (i + 1 == n1 + n2)
                B[i][j] -= u(x(n1 + n2),y(j))/ (h2 * h2);
            if (j - 1 == 0)
                B[i][j] -= u(x(i),y(0)) / (k1 * k1);
            if (j + 1 == m1)
                B[i][j] -=u(x(i),y(m1)) / (k1 * k1);
        }

    N_and_e = new double[2];
    N_and_e[0] = N;
    N_and_e[1] = e;

     Method M;
    switch (num) {
    case 0:
        N_and_e = M.Conjugate_gradient21(X, B, N_and_e, n1, m1, n2, m2, h1, k1, h2, k2);
        break;
    case 1:
        N_and_e = M.Zeidel21(X, B, N_and_e, n1, m1, n2, m2, h1, k1, h2, k2);
        break;
    }
    z = 0;
    for (int i = 1; i < n1; i++)
        for (int j = 1; j < m1 + m2; j++)
            if (z < abs(X[i][j] - Xr[i][j]))
                z = abs(X[i][j] - Xr[i][j]);
    for (int i = n1; i < n1 + n2; i++)
        for (int j = 1; j < m1; j++)
            if (z < abs(X[i][j] - Xr[i][j]))
                z = abs(X[i][j] - Xr[i][j]);

}

Task2::~Task2()
{
    for (int i = 0; i < n + 1; i++)
    {
        delete[] Xr[i];
        delete[] X[i];
        delete[] B[i];
    }
    delete[] Xr;
    delete[] X;
    delete[] B;
    delete N_and_e;
}


