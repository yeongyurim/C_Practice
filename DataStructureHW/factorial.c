#include <stdio.h>
#include <time.h>

unsigned long long factorial(int n)
{
    if (n==1) return 1;
    else return (n* factorial(n-1));
}

unsigned long long factorial_iter(int n)
{
    int k, v = 1;
    for(k=n; k>0; k--)
        v = v*k;
    return v;
}
int main(void) {
    clock_t startT = clock();
    printf("%llu ",factorial(30));
    clock_t endT = clock();
    printf("%f\n",(float)endT-startT);

    startT = clock();
    printf("%llu ",factorial_iter(30));
    endT = clock();
    printf("%f\n",(float)endT-startT);
    return 0;
}