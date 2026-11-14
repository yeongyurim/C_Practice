#include<stdio.h>

int main()
{
	int a = 3, b = 7;
	a = b;
	printf("a=%d\n", a);

	int   num[4] = {6,7,8,9};
	printf("num[%d]=%d\n", 3, num[3]);
	printf("do~while 반복문으로 출력\n");
	int i = 0;
	do {
		printf("num[%d]=%d\n",i, num[i]);
		++i;
	} while (i <= 3);

	int val[4] = {10, 20,30, 40};
	//num = val; //문법 오류
	//배열명은 포인터(주소) 상수이다.
	//즉, 배열변수가 저장한 주소값은
	//상수화되어서 절대 변경 불가함.
	/*num[0] = val[0];
	num[1] = val[1];
	num[2] = val[2];
	num[3] = val[3];*/
	//for 반복문 이용해서 val배열의
	//원소값들을 num 배열에 복사시킴
	i = 0;
	for (i = 0; i <= 3; ++i)
	{
		num[i] = val[i];
	}

	i = 0;
	do {
		printf("num[%d]=%d\n", i, num[i]);
		++i;
	} while (i <= 3);

	return 0;
}