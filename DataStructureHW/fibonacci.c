#include <stdio.h>
#include <time.h>

int fib_iter(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;

    int i, pp = 0, p = 1, result = 0;

    for(i=2; i<= n; i++) {
        result = p + pp;
        pp = p;
        p = result;
    }
    return result;
}

int fib(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return (fib(n-1) + fib(n-2));
}

int main(void) {
    clock_t startT, endT;

    startT = clock();
    printf("%d\n",fib_iter(20));
    endT = clock();
    printf("iteration: %f seconds\n", (double)(endT - startT) / CLOCKS_PER_SEC);

    startT = clock();
    printf("%d\n",fib(20));
    endT = clock();
    printf("recursion: %f seconds\n", (double)(endT - startT) / CLOCKS_PER_SEC);

    return 0;
}