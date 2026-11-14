#include<stdio.h>

int global = 0;

//swap함수의 원형(prototype, header)
//void swap(int na, int nb);
void swap(int  ,  int );

static void staFunc()
{
	int nonStatic = 0;
	static  int  staNum = 0;
}

void pswap(int*, int*);

int main()
{
	int a = 3, b = 7;
	swap( a,  b);
	printf("swap함수호출후a=%d,b=%d\n",
							a,   b);
	pswap( &a , &b); 
	printf("pswap함수호출후a=%d,b=%d\n",
					a, b);

	return 0;
}
//pswap함수의 정의부(구현부)
void pswap(int*  pa, int*   pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//swap함수의 정의부(구현부)
void swap(int na, int nb)
{
	int temp = 0;
	temp = na;
	na = nb;
	nb = temp;
	printf("na=%d , nb=%d\n", na, nb);
}