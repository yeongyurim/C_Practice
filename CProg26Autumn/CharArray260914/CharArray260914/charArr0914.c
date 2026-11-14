//#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	//char  name[6] = {"apple"};
	char  name[6] = "apple" ;
	printf("name[4]=%c\n", name[4]);
	printf("name = %s\n", name);
	printf("name이 저장한주소 = %p\n", 
							name);
	printf("name이저장한주소=%#.16X\n",
							name);

	name[0] = 'A';
	printf("수정후name = %s\n", name);

	char fruit[11] = { "grape" };
	printf("fruit=%s\n", fruit);
	//배열변수명은 주소상수이므로 
	//절대 변경불가
	//fruit = name;
	//fruit[0] = name[0];
	
	strcpy(fruit, name);
	//해결 방법 1
	//strcpy_s(fruit, strlen(name) +1,
	//				name);
	printf("복사후 fruit=%s\n", fruit);

	char food[6] = { "berry" };
	strcat(fruit, food);
	printf("연결후 fruit=%s\n", fruit);
	
	//char* p = "apple";
	//*p = 'A'; //error
	//문자열 상수 데이터 이므로 변경 불가
	//printf("p=%s\n", p);

	return 0;
}