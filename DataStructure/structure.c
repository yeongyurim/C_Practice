#include <stdio.h>
#include <math.h>

void structure(void) {
	struct point {
		int xpos;
		int ypos;
	};

	typedef struct person {
		char name[20];
		char phoneNum[20];
		int age;
	} person;

	struct point posUser;
	struct person gyurim = {"gyurim","01074769282",24}; //중괄호를 통해 선언과 동시에 초기화가 가능하다. 
	double distance;
	
	person customer[3] = {
		{"gyurim","01074769282",24},
		{"jaewoo","01096471972",24},
		{"jinwoo","01082662804",24}
	}; //배열로 선언이 가능하다.

	person * ptrPerson = customer;

	for(int i=0;i<sizeof(customer)/sizeof(person);i++){
		printf("name : %s\n phone number : %s\n age : %d\n",ptrPerson->name,ptrPerson->phoneNum,ptrPerson->age); //-> = *,.을 합친것과 같다.
		ptrPerson++;
	}

	printf("assign x,y value for set position \n x:");
	scanf("%d",&posUser.xpos);
	printf("y:");
	scanf("%d",&posUser.ypos);

	distance = sqrt((double)(posUser.xpos)*(posUser.xpos) + (posUser.ypos)*(posUser.ypos));
	printf("x: %d, y: %d distance : %g \n", posUser.xpos, posUser.ypos, distance);

}
