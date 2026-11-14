#include<stdio.h>

int main()
{
	int a = 7;	
	printf("a=%d\n", a);
	//아직은 아무데도 가리키지 마라!
	int*   pa = 0; //int* pa = NULL;
	pa = &a;
	
	//int*   pa = &a ;
	printf("*pa가 가리키는 값=%d\n",
							*pa);
	printf("a의 시작주소=%p\n", &a);
	printf("pa가 저장한주소=%p\n", pa);
	printf("pa의 크기=%d\n",
					sizeof(pa));

	int b = 8;
	int  *pb = 0;
	pb = &b;
	printf("*pb가 가리키는 값=%d\n", 
							*pb);

	//*pa는 공간자체(a), *pb는 실제값 8
	*pa = *pb; //a = 8; 와 똑같은 문장
	printf("*pa=*pb;수행후 a=%d\n", a);

	//int* pa = 0; //int* pa = NULL;
	//pa = &a;
	int**     p2a = 0;
	p2a = &pa;
	printf("pa의 시작주소=%p\n", &pa);
	printf("p2a가 저장한주소=%p\n", p2a);
	printf("**p2a=%d\n", **p2a);
	printf("*p2a = %p\n", *p2a);

	//int**     p2a = 0;
	int***    p3a = 0;
	p3a = &p2a;
	printf("pa의 시작주소=%p\n", &pa);
	printf("*p3a=%p\n", *p3a);
	printf("**p3a=%p\n", **p3a);
	printf("***p3a=%d\n", ***p3a);
	printf("p3a의 크기=%d\n",
					sizeof(p3a));

	return 0;
}