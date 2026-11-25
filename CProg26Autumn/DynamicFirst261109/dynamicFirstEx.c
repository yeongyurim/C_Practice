#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int  global = 0;

static void staFunc()
{
	static int  staNum = 5;
	int  nonStaVal = 7;
}

struct Student
{
	int stID;
} gildong ;

int main()
{
	int local = 8;
	struct Student  wonbin;

	int* pn = 0;
	//pn = (int*)malloc(4);
	pn = (int*)malloc( sizeof(int) );
	//if (pn == NULL)
	if (pn == 0)
	{
		printf("메모리공간부족으로 할당불가\n");
		return 0;
	}
	else {
		*pn = 6;
		printf("*pn=%d\n", *pn);
	}	

	int* pv = 0;
	pv = (int*)malloc(sizeof(int) * 4);
	if (pv == NULL)
	{
		printf("메모리공간부족으로 할당불가\n");
		free(pn);
		return 0;
	}
	*(pv + 0) = 10;
	*(pv + 1) = 20;
	*(pv + 2) = 30;
	*(pv + 3) = 40;
	
	int i = 0;
	while(i<=3)
	{
		printf("*(pv+%d) = %d\n", 
					 i, *(pv + i) );
		++i;
	}

	//free(NULL)은 아무 일도 하지 않으므로 조건 없이 해제
	free(pv);
	free(pn);
	//해제한 메모리를 다시 쓰지 않도록 NULL로 초기화
	pv = NULL;
	pn = NULL;

	return 0;
}