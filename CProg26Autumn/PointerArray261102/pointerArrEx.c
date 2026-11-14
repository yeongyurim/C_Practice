#include<stdio.h>

int main()
{
	char ani[4][10] = 
		{"dog", "elephant",
		 "horse", "lion"};

	printf("ani[0]=%p\n", ani[0]);
	printf("ani[1]=%p\n", ani[1]);
	printf("ani[0]=%s\n", ani[0]);
	printf("ani[1]=%s\n", ani[1]);
	printf("ani[2]=%s\n", ani[2]);
	printf("ani[3]=%s\n", ani[3]);

	int i = 0;//0,1, 2, 3, 4
	while(i <= 3)
	{
		printf("ani[%d]=%s\n", 
					i, ani[i]);
		++i;
	}

	//char   *ptani[4] = { 0 , };
	char* ptani[4] = {"dog", "elephant",
					"horse", "lion"};
	printf("dog가 반환하는 주소값=%p\n",
						"dog");
	printf("ptani[0]=%p\n", ptani[0]);
	printf("ptani[0]=%s\n", ptani[0]);
	printf("ptani[1]=%s\n", ptani[1]);
	printf("ptani[2]=%s\n", ptani[2]);
	printf("ptani[3]=%s\n", ptani[3]);

	printf("ptani[2][2]=%c\n", 
					ptani[2][2] );

	for(int k = 0; k <= 3 ; ++k )
	{
		printf("ptani[%d]=%s\n",
					  k, ptani[k] );
	}

	return 0;
}