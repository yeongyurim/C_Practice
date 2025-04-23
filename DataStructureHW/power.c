#include <stdio.h>
#include <time.h>

double power_it(double x, int n)
{
    int i;
    double result = 1.0;
    for (i = 0; i < n; i++)
        result = result * x;
    return result;
}

double power_re(double x, int n)
{
    if (n == 0) 
        return 1.0;
    else
        return (x * power_re(x, n-1));
}

double power_en(double x, int n)
{
    if (n == 0) return 1;
    else if ((n % 2) == 0) 
        return power_en(x * x, n / 2);
    else return (x * power_en(x * x, (n - 1) / 2));
}

double power_en_iter(double x, int n)
{
    double result = 1.0;

    while (n > 0) {
        if (n % 2 == 1)  // n이 홀수일 경우
            result *= x;
        x *= x;          // x를 제곱
        n /= 2;          // n을 절반으로
    }

    return result;
}

int main (void) {
    clock_t startT, endT;

    startT = clock();
    printf("%lf\n",power_it(2,100));
    endT = clock();
    printf("iteration: %f seconds\n", (double)(endT - startT) / CLOCKS_PER_SEC);

    startT = clock();
    printf("%lf\n",power_re(2,100));
    endT = clock();
    printf("recursion: %f seconds\n", (double)(endT - startT) / CLOCKS_PER_SEC);

    startT = clock();
    printf("%lf\n",power_en(2,100));
    endT = clock();
    printf("recursion_en: %f seconds\n", (double)(endT - startT) / CLOCKS_PER_SEC);

    startT = clock();
    printf("%lf\n",power_en_iter(2,100));
    endT = clock();
    printf("recursion_en: %f seconds\n", (double)(endT - startT) / CLOCKS_PER_SEC);

    return 0;
}