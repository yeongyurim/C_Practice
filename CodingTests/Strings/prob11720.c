#include <stdio.h>

int main (void)
{
    int sum=0;
    char t, i, a[100];
    scanf("%d",&t);
    scanf("%s", a);
    for(i=0;i<t;i++)
    {
        sum += (a[i]-'0');
    }
    printf("%d",sum);
}