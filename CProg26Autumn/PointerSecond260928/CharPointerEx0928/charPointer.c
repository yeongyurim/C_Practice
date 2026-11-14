#include<stdio.h>

int main()
{
	char ch[5] = "book" ;
	char ch2 = 'A';
	char* pch2 = &ch2;
	printf("ch=%s\n", ch);
	printf("ch가 저장한주소=%p\n", ch);
	printf("*pch2가 가리키는 값=%c\n",
							 *pch2);

	char* pstr = "apple";
	//char* pstr = {"apple"} ;
	printf("*pstr=%c\n", *pstr);
	printf("pstr가 저장한주소=%p\n",
							pstr);
	printf("apple문자열의 주소=%p\n",
						&"apple");
	printf("pstr가 가리키는 문자열=%s\n",
							pstr);

	return 0;
}