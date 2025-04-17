#include <stdio.h>

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
    printf("%d\n",fib_iter(2));
    printf("%d\n",fib(2));
    return 0;
}