#include "task.h"

Task::Task(int n1, int m1, int N, double e, int num = 1)
{
    n = n1;
    m = m1;
    h = (2 - 1) / (double)n;
    k = (2 - 1) / (double)m;

    N_and_e = new double[2];
    N_and_e[0] = N;
    N_and_e[1] = e;

    Xr = new double*[n + 1];
    X = new double*[n + 1];
    B = new double*[n + 1];

    for (int i = 0; i < n + 1;i++)
    {
        Xr[i] = new double[m + 1]();
        X[i] = new double[m + 1]();
        B[i] = new double[m + 1]();
    }

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            X[i][j] = 0;
            Xr[i][j] = u(x(i), y(j));
            B[i][j] = -f(x(i),y(j));
            if (i - 1 == 0)
                B[i][j] -= u(x(0),y(j))/ (h * h);
            if (i + 1 == n)
                B[i][j] -= u(x(n),y(j)) / (h * h);
            if (j - 1 == 0)
                B[i][j] -= u(x(i),y(0)) / (k * k);
            if (j + 1 == m)
                B[i][j] -= u(x(i),y(m)) / (k * k);

        }
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

    z = 0;
    for (int i = 1; i < n; i++)
        for (int j = 1; j < m; j++)
            if (z < abs(X[i][j] - Xr[i][j]))
                z = abs(X[i][j] - Xr[i][j]);

    //Доооброботка
    for (int i = 0; i < n + 1; i++)
    {
        X[i][0] = u(x(i), y(0));
        X[i][m] = u(x(i), y(m));
    }
    for (int j = 0; j < m + 1; j++)
    {
        X[0][j] = u(x(0), y(j));
        X[n][j] = u(x(n), y(j));
    }
}

Task::~Task()
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
}
