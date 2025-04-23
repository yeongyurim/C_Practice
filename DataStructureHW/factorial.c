#include <stdio.h>
#include <time.h>

unsigned long long factorial(int n)
{
    if (n == 1) return 1;
    else return (n * factorial(n - 1));
}

unsigned long long factorial_iter(int n)
{
    int k;
    unsigned long long v = 1;  // 이거도 v는 unsigned long long이 맞아. (값이 커지니까)
    for (k = n; k > 0; k--)
        v = v * k;
    return v;
}

int main(void) {
    clock_t startT, endT;

    startT = clock();
    printf("%llu ", factorial(30));
    endT = clock();
    printf("%f seconds\n", (double)(endT - startT) / CLOCKS_PER_SEC);

    startT = clock();
    printf("%llu ", factorial_iter(30));
    endT = clock();
    printf("%f seconds\n", (double)(endT - startT) / CLOCKS_PER_SEC);

    return 0;
}
