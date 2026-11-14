#include<stdio.h>

int main()
{
	int num = 7;
	double dv = 3.14;
	void* vp = 0;
	vp = &num;
	printf("vp--> num=%d\n", *(int*)vp);
	int* pnum = &num;
	printf("*pnum = %d\n", *pnum) ;

	vp = &dv;
	printf("vp==>%.2lf\n", *(double*)vp);

	return 0;
}