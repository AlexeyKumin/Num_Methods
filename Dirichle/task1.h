#ifndef TASK1_H
#define TASK1_H
#include <math.h>
#include "methods.h"
class Task1
{
public:
    int n, m, N, s;
    float h, k, e;
    float **X, **B;

    Task1(int n, int m, int N, float e, int num);

    float f(float x, float y)
    {
       return atan(x / y);
    }
    float mu1(float y){
        return 0 * y;
    }
    float mu2(float y){
        return 0 * y;
    }
    float mu3(float x){
        return pow(sin(M_PI * x), 2);
    }
    float mu4(float x){
        return cosh((x - 1) * (x - 2)) - 1;
    }
    float x(int i)
    {
        return 1 + i*h;
    }
    float y(int j)
    {
        return 1 + j*k;
    }
    ~Task1();
};

#endif // TASK1_H
