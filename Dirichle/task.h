#ifndef TASK_H
#define TASK_H
#include <math.h>
#include "methods.h"
class Task
{
public:
    int n, m, N, s;
    float h, k, e, z;
    float **Xr, **X, **B;

    Task(int n, int m, int N, float e, int num);
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
    ~Task();
};

#endif // TASK_H
