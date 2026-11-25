#include<stdio.h>
#include<stdlib.h>
//#include<malloc.h>

int main()
{
	int* ip = 0;
	
	int i = 0;
	
	//calloc() 관련 코드 삽입

	printf("초기화 전\n");	
	for (i = 0; i <= 4; ++i)
		printf("ip[%d]=%d\n",
			i, ip[i]);

	for (i = 0; i <= 4; ++i)
	{
		ip[i] = i + 1;
		printf("ip[%d]=%d\n",
				  i, ip[i]);
	}

	printf("calloc()함수로 배열할당후");
	printf("ip에 저장된 주소 = %p\n",
							ip);

	printf("realloc()함수로 재할당 후=\n");

	//realloc() 관련 코드 삽입
    
	
	printf("realloc()함수로 재할당후 ip에 저장된 주소=%p\n",
		ip);
	for (i = 0; i <= 6; ++i)
		printf("ip[%d]=%d\n",
				i, ip[i]);

	ip[5] = 6;
	ip[6] = 7;
	for (i = 0; i <= 6; ++i)
		printf("ip[%d]=%d\n",
				i, ip[i]);

	free(ip);	

	return 0;
}