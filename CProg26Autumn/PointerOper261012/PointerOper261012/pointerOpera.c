#include<stdio.h>

int main()
{
	int num[4] = { 3,5,7,9 };
	int i = 0;
	do
	{
		printf("num[%d]=%d\n",
					i, num[i]);
		++i;
	} while (i <= 3);

	printf("num배열 각 원소의 시작주소\n");
	i = 0;
	do
	{
		printf("num[%d]시작주소=%d\n",
	     i, (unsigned int)&num[i]);
		printf("num[%d]시작주소=%p\n",
					i,     &num[i]);
		++i;
	} while (i <= 3);

	int* pn = 0;
	pn = num;
	//pn 포인터변수를 이용한 배열 표현
	printf("pn[0]=%d\n", pn[0]);
	printf("pn[3]=%d\n", pn[3]);

	for (i = 0; i <=3 ; ++i )
	{
		printf("pn[%d]=%d\n",
				    i, pn[i]);
	}

	printf("포인터연산시 주소 증가\n");
	printf("pn이 가리키는 주소=%p\n",	pn);
	printf("pn+0이 가리키는 주소=%p\n", pn+0);
	printf("pn+4가 가리키는 주소=%p\n", pn+4);

	printf("*pn=%d\n", *pn);
	printf("*(pn+0)=%d\n", *(pn + 0));
	printf("*(pn+1)=%d\n", *(pn + 1));
	printf("*(pn+2)=%d\n", *(pn + 2));
	printf("*(pn+3)=%d\n", *(pn + 3));
	printf("while 반복문, 포인터표현 출력\n");
	//pn포인터변수를 이용한 포인터표현으로 출력
	i = 0;
	while(i <= 3)
	{
		printf("*(pn+%d)=%d\n",
					 i, *(pn + i)  );
		++i;
	}

	//int num[4] = { 3,5,7,9 };
	int  (*pc)[4] = 0 ;
	pc = num;
	//(*pc)배열포인터변수를 이용한 배열표현
	printf("(*pc)[0]=%d\n", 
					(*pc)[0]);
	printf("(*pc)[1]=%d\n", 
					(*pc)[1]);
	printf("(*pc)[2]=%d\n", 
					(*pc)[2]);
	printf("(*pc)[3]=%d\n", 
					(*pc)[3]);
	for(i = 0; i<=3; ++i)
		printf("(*pc)[%d]=%d\n",
					  i , (*pc)[i]);

	//(*pc)배열포인터변수를 이용한 포인터표현
	printf("*((*pc) + 0)=%d\n",
					*((*pc) + 0)  );
	printf("*((*pc + 0) + 0)=%d\n",
				*((*pc + 0) + 0));

	printf("*( *pc + 0)=%d\n",
				    *( *pc + 0) );
	printf("*( *pc )=%d\n",
					*(*pc)  );

	printf("*((*pc) + 1)=%d\n",
					*((*pc) + 1)  );
	printf("*((*pc + 0) + 1)=%d\n",
				*((*pc + 0) + 1));

	printf("*((*pc) + 2)=%d\n",
					*((*pc) + 2));
	printf("*((*pc + 0) + 2)=%d\n",
					*((*pc + 0) + 2));
	printf("*((*pc) + 3)=%d\n",
					*((*pc) + 3));
	printf("*(*pc + 3)=%d\n",
					*(*pc + 3));
	printf("*((*pc + 0) + 3)=%d\n",
					*((*pc + 0) + 3));

	int val[3][3] = { {10, 20, 30} ,
					  {40, 50, 60} ,
					  {70, 80, 90 } };

	int  (*pv)[3] = 0;
	pv = val;

	//pv 라는 포인터변수를 이용한 배열표현
	printf("*(pv + 0) = %p\n", *(pv + 0) ) ;
	printf("*(pv + 1) = %p\n", *(pv + 1) );
	printf("*(pv + 2) = %p\n", *(pv + 2) );

	printf("*pv + 0 = %p\n", *pv + 0  );
	printf("*pv + 1 = %p\n", *pv + 1  );
	printf("*pv + 2 = %p\n", *pv + 2  );

	printf("(*pv)[0]=%d\n", (*pv)[0]);
	printf("(*pv)[1]=%d\n", (*pv)[1]);
	printf("(*pv)[2]=%d\n", (*pv)[2]);
	printf("(*pv)[3]=%d\n", (*pv)[3]);
	printf("(*pv)[4]=%d\n", (*pv)[4]);
	printf("(*pv)[5]=%d\n", (*pv)[5]);

	printf("(*pv)[6]=%d\n", (*pv)[6]);
	printf("(*pv)[7]=%d\n", (*pv)[7]);
	printf("(*pv)[8]=%d\n", (*pv)[8]);

	//pv 라는 포인터변수를 이용한 배열표현_두번째
	printf("(*(pv+0))[0]=%d\n", (*(pv + 0))[0]);
	printf("*(pv+0)[0]=%d\n", *(pv + 0)[0]);
	printf("*(pv+0)[1]=%d\n", *(pv + 0)[1]);
	printf("*(pv+0)[2]=%d\n", *(pv + 0)[2]);
	printf("*(pv+1)[1]=%d\n", *(pv + 1)[1]);

	printf("(*(pv+0))[1]=%d\n", (*(pv + 0))[1]);
	printf("(*(pv+0))[2]=%d\n", (*(pv + 0))[2]);

	printf("(*(pv+1))[0]=%d\n", (*(pv + 1))[0]);
	printf("(*(pv+1))[1]=%d\n", (*(pv + 1))[1]);
	printf("(*(pv+1))[2]=%d\n", (*(pv + 1))[2]);

	printf("(*(pv+2))[0]=%d\n", (*(pv + 2))[0]);
	printf("(*(pv+2))[1]=%d\n", (*(pv + 2))[1]);
	printf("(*(pv+2))[2]=%d\n", (*(pv + 2))[2]);

	printf("for 반복문,pv 포인터+배열표현출력\n");
	for(int row = 0 ;  row <=2 ; ++row)
		for (int col=0 ; col <=2 ; ++col)
		{
			printf("(*(pv + %d))[%d]=%d\n", 
  				  row, col, (*(pv + row))[col] );
		}

	//pv라는 배열포인터변수를 포인터표현
	printf("시작\n");
	printf(" *(*(pv + 0) + 0) = %d\n ",
					*(*(pv + 0) + 0));
	printf(" *(*(pv + 0) + 1) = %d\n ",
					*(*(pv + 0) + 1));
	printf(" *(*(pv + 0) + 2) = %d\n ",
					*(*(pv + 0) + 2));

	printf(" *(*(pv + 1) + 0) = %d\n ",
					*(*(pv + 1) + 0));
	printf(" *(*(pv + 1) + 1) = %d\n ",
					*(*(pv + 1) + 1));
	printf(" *(*(pv + 1) + 2) = %d\n ",
					*(*(pv + 1) + 2));

	printf(" *(*(pv + 2) + 0) = %d\n ",
					*(*(pv + 2) + 0));
	printf(" *(*(pv + 2) + 1) = %d\n ",
					*(*(pv + 2) + 1));
	printf(" *(*(pv + 2) + 2) = %d\n ",
					*(*(pv + 2) + 2));

	printf("for문,pv라는 배열포인터변수를");
	printf(" 이용한 포인터표현으로 출력\n ");

	for(int  row = 0 ; row<=2; ++row )
		for(int col=0 ;col <=2; ++col )
			printf(" *(*(pv + %d) + %d) = %d\n ",
				row,col, *(*(pv + row) + col));

	return 0;
}