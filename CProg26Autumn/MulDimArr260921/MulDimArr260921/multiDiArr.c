#include<stdio.h>

int main()
{
	//int num[2][3] = 
	//	{ {0,0,0} , {0,0,0} };
	//int num[2][3] = { {0,} ,  };
	int num[2][3] = 
		{ {4,5,6}, {7,8,9} };
	printf("num[0][0]=%d\n", num[0][0]);
	printf("num[0][1]=%d\n", num[0][1]);
	printf("num[0][2]=%d\n", num[0][2]);

	printf("num[1][0]=%d\n", num[1][0]);
	printf("num[1][1]=%d\n", num[1][1]);
	printf("num[1][2]=%d\n", num[1][2]);


	int row = 0, col = 0;
	printf("이중do~while반복문으로 출력\n");

	do {
		do {
			printf("num[%d][%d]=%d\n", 
			   row,col,num[row][col]);
			++col;
		} while (col <= 2);
		++row;
		col = 0;
	} while (row <= 1);

	printf("이중 do~while문 탈출\n");
	printf("num2차원배열의 시작주소=%p\n",
								num);
	printf("num[0] 1차원배열의 시작주소=%p\n",
						num[0]);
	printf("num[1] 1차원배열의 시작주소=%p\n",
					num[1]);

	return 0;
}