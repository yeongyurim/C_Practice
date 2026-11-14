#include<stdio.h>

int main()
{
	/* ---------------- Part 1 ----------------
	   ani : char* 4개를 원소로 갖는 "포인터 배열"
	   각 원소는 문자열의 시작주소만 저장한다 */
	char* ani[4] = { "cat", "dog", "lion", "bear" };
	int i, j;

	printf("[1] 배열표현으로 문자열 출력\n");
	for (i = 0; i <= 3; ++i)
		printf("ani[%d]=%s\n", i, ani[i]);

	printf("\n[2] 포인터표현으로 문자열 출력\n");
	//ani[i] 와 *(ani+i) 는 완전히 같은 뜻
	for (i = 0; i <= 3; ++i)
		printf("*(ani+%d)=%s\n", i, *(ani + i));

	printf("\n[3] 포인터배열 원소가 저장한 주소\n");
	for (i = 0; i <= 3; ++i)
		printf("ani[%d]=%p / &ani[%d]=%p\n",
					i, ani[i], i, &ani[i]);

	printf("\n[4] 문자 단위, 배열표현 ani[i][j]\n");
	for (i = 0; i <= 3; ++i)
	{
		for (j = 0; ani[i][j] != '\0'; ++j)
			printf("ani[%d][%d]=%c\n", i, j, ani[i][j]);
	}

	printf("\n[5] 문자 단위, 포인터표현 *(*(ani+i)+j)\n");
	for (i = 0; i <= 3; ++i)
	{
		for (j = 0; *(*(ani + i) + j) != '\0'; ++j)
			printf("*(*(ani+%d)+%d)=%c\n",
					i, j, *(*(ani + i) + j));
	}

	printf("\n[6] 포인터배열의 크기\n");
	//포인터배열은 문자열이 아니라 주소(8byte)만 담는다
	printf("sizeof(ani)=%zu\n", sizeof(ani));
	printf("sizeof(ani[0])=%zu\n", sizeof(ani[0]));
	printf("원소개수=%zu\n", sizeof(ani) / sizeof(ani[0]));

	/* ---------------- Part 2 ----------------
	   2차원 배열 ani2 를 포인터 배열로 가리켜서 출력
	   ani2[i] 는 i번째 행의 시작주소(char*) 이다 */
	char ani2[4][5] = { "cat", "dog", "lion", "bear" };
	char* pani[4] = { ani2[0], ani2[1], ani2[2], ani2[3] };

	printf("\n[7] 2차원배열 ani2 를 포인터배열 pani 로 출력\n");
	for (i = 0; i <= 3; ++i)
		printf("pani[%d]=%s / *(pani+%d)=%s\n",
					i, pani[i], i, *(pani + i));

	printf("\n[8] ani2 는 내용을 직접 담으므로 수정 가능\n");
	pani[0][0] = 'C';		//ani2[0][0] 이 바뀐다
	printf("pani[0]=%s / ani2[0]=%s\n", pani[0], ani2[0]);

	printf("\n[9] 2차원배열의 크기\n");
	printf("sizeof(ani2)=%zu\n", sizeof(ani2));
	printf("sizeof(ani2[0])=%zu\n", sizeof(ani2[0]));

	return 0;
}
