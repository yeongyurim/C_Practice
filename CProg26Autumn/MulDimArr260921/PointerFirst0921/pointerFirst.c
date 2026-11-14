#include<stdio.h>

int main()
{
	int a = 7;
	printf("a=%d\n", a);
	int*   pa = 0;
	pa = &a;
	//int*   pa = &a ;
	printf("*pa가 가리키는 값=%d\n",
							*pa);

	return 0;
}