#ifndef TASK2_H
#define TASK2_H


#include <math.h>
#include "methods.h"
class Task2
{
public:
    int n, m, N, s, na, ma;
    float h, k, e, z, a, b;
    float **Xr, **X, **B;

    Task2(int n, int m, int N, float e, int num);
    float u(float x, float y)
    {
        return exp(x*x - y*y);
    }
    float f(float x, float y)
    {
        return -4 * exp(x*x - y*y) * (x*x + y*y);
    }
    //float mu1(float y);
    //float mu2(float y);
    //float mu3(float x);
    //float mu4(float x);
    float x(int i)
    {
        return 1 + i*h;
    }
    float y(int j)
    {
        return 1 + j*k;
    }
    ~Task2();
};

#endif // TASK2_H
