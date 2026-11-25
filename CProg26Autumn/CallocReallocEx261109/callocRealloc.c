#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main()
{
	int* ip = 0;
	ip = (int*)calloc(4, sizeof(int) );

	for (int i = 0; i <= 3; ++i)
	{

	}

	free(ip);
	ip = NULL;
	return 0;
}