#include <stdio.h>
// call by reference
void showArrayElement(int param[],int len){ // 매개변수(parameter)의 선언에서 int param[]과 int* param은 완전히 동일하다.
	for (int i = 0; i < len; i++) {
		printf("%d\n", *param);
		*param += 1;
		param++; // ptrA에 증감 연산시 혀당 포인터형의 sizeof값만큼 곱해진 값이 더해진다.
	}
}

void pointer(void) {
	//int* ptr = 0xFF000000; 임의의 주소를 직접 지정하는 방식은 여러 컴파일러에서 금지하는 방식임
	int b;
	b = 123; // stack(자동메모리)에 int형 변수 메모리 생성 후 123으로 초기화
	int* ptr2 = &b; // 자동메모리에 int 포인터형 변수 생성 주소 값을 b가 가리키는 곳으로 초기화
	printf("pointer has address of variable %d \n", ptr2);
	printf("%d\n", *ptr2); // 포인터형 변수 앞에 *을 붙이면 해당 위치의 변수값을 가져옴

	int arr[5] = { 0,1,2,3,4 };
	int* ptrA = arr;
	printf("arr's content is pointer that pointing first address of array %d\n", arr);
	printf("%s\n", ptrA == arr ? "true" : "false");
	
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *ptrA);
		ptrA++; // ptrA에 증감 연산시 혀당 포인터형의 sizeof값만큼 곱해진 값이 더해진다.
	}

	char str1[] = "changeable String";
	char* str2 = "Constant String"; // Double Quotation Mark 내부의 문자열은 주소 값을 반환한다. 

	str1[0] = 'C';
	//str2[0] = 'x'; causing error
	
	printf("result of change \n1: %s \n2: %s\n",str1,str2);
	char * strArr[3] = {"Simple" , "String", "Array"};
	printf("%s %s %s\n",strArr[0],strArr[1],strArr[2]);
	int *ptrParam = arr; // int ptrParam[] = arr 은 성립이 되지 않는다.
	showArrayElement(ptrParam,sizeof(arr)/sizeof(int)); // sizeof함수에 배열을 넣을 시 총 몇바이튼지 나온다.

	ptrA = arr;
	printf("external function can change value which is contained in current function");
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *ptrA);
		ptrA++; // ptrA에 증감 연산시 혀당 포인터형의 sizeof값만큼 곱해진 값이 더해진다.
	}
}


