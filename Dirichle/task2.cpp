#include "task2.h"


Task2::Task2(int n1, int m1, int N, float e, int num)
{
    n = n1;
    m = m1;
    h = (2 - 1) / (float)n;
    k = (2 - 1) / (float)m;
    na = 0;
    ma = 0;
    float inc = 1.5 - x(na);
    while (inc + 0.000001 > h)
    {
        na++;
        inc = 1.5 - x(na);
    }
    a = 1.5 - x(na-1);

    while (1.5 - y(ma) + 0.000001 > h)
        ma++;
    b = 1.5 - y(ma-1);
    //ma++;


    Xr = new float*[n + 1];
    X = new float*[n + 1];
    B = new float*[n + 1];

    for (int i = 0; i < na + 1;i++)
    {
        Xr[i] = new float[m + 1]();
        X[i] = new float[m + 1]();
        B[i] = new float[m + 1]();
    }
    for (int i = na + 1; i < n + 1; i++)
    {
        Xr[i] = new float[ma + 1]();
        X[i] = new float[ma + 1]();
        B[i] = new float[ma + 1]();
    }
    //Заполнение первой части
    for (int i = 0; i < na + 1 ; i++)
        for (int j = 0; j < m + 1; j++)
        {
            X[i][j] = 0;
            Xr[i][j] = u(x(i), y(j));
            B[i][j] = -f(x(i),y(j));
            if (i - 1 == 0)
                B[i][j] -= u(x(0),y(j))/ (h * h);
            if ((i + 1 == na) && (j >= ma))
                B[i][j] -= u(x(na),y(j)) / (a * a);
            if (j - 1 == 0)
                B[i][j] -= u(x(i),y(0)) / (k * k);
            if (j + 1 == m)
                B[i][j] -= u(x(i),y(m)) / (k * k);
            if ((i == na) && (j + 1 == ma))
                B[i][j] -= u(x(na),y(ma)) / (k * k);

        }
    //Заполнение второй части
    for (int i = na + 1; i < n + 1; i++)
        for (int j = 0; j < ma + 1; j++)
            {
                X[i][j] = 0;
                Xr[i][j] = u(x(i), y(j));
                B[i][j] = -f(x(i),y(j));
                if (i + 1 == n)
                    B[i][j] -= u(x(n),y(j)) / (h * h);
                if (j - 1 == 0)
                    B[i][j] -= u(x(i),y(0)) / (k * k);
                if (j + 1 == ma)
                    B[i][j] -= u(x(i),y(ma)) / (b * b);

            }

    Method M;
    switch (num) {
    case 0:
        s = M.Conjugate_gradient2(X, B, e, N, n, m, na, ma, h, k);
        break;
    case 1:
        s = M.Zeidel2(X, B, e, N, n, m, na, ma, h, k);
        break;
    }
    z = 0;
    for (int i = 1; i < na; i++)
        for (int j = 1; j < m; j++)
            if (z < abs(X[i][j] - Xr[i][j]))
                z = abs(X[i][j] - Xr[i][j]);
    for (int i = na; i < n; i++)
        for (int j = 1; j < ma; j++)
            if (z < abs(X[i][j] - Xr[i][j]))
                z = abs(X[i][j] - Xr[i][j]);

    //Доооброботка
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
    }

