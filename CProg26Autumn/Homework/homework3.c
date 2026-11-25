#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int speed, carNumber;
    char* carName, carColor, driverAddress;
} Car;

int main(void){
    Car car1;
    car1.carName = (char*)calloc(100,1);
    car1.carColor = (char*)calloc(100,1);
    car1.driverAddress = (char*)calloc(100,1);
    car1.speed = (int*)calloc(1,4);
    car1.carNumber = (int*)calloc(1,4);
    printf("차량 속도를 입력해주세요(km/h) :");
    scanf("%d",car1.speed);
    printf("차량 번호를 입력해주세요 :");
    scanf("%d",car1.carNumber);
    printf("차량 이름을 입력해주세요 :");
    scanf("%s",car1.carName);
    printf("차량 색상을 입력해주세요 :");
    scanf("%s",car1.driverAddress);
    printf("운전자 주소를 입력해주세요 :");
    scanf("%s",car1.carName);
     
    return 0;
}