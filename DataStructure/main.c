#include <stdio.h>
#include "pointer.c"
#include "structure.c"
#include "quiz.c"
//#include "Ch.1/LinkedList/LinkedList.h"

int main(void) {
	int num = 0;
	
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@ 1: pointer              @\n");
	printf("@ 2: structure            @\n");
	printf("@ 3: quiz                 @\n");
	printf("@ 4: LinkedList           @\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("input the your wish task : ");
	scanf("%d", &num);

	switch (num) {
	case 1: pointer();
	break;
	
	case 2:structure();
	break;
	
	case 3:quiz();
	break;

	//case 4:Test_LinkedList();
	//break;

	default: printf("invalid input");
	}
	return 0;
}