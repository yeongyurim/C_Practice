#include<stdio.h>
int main()
{
    // 아래 4줄은 절대 변경 하지 말 것
    int dan[8] = { 2,3,4,5,6,7,8,9} ;
    int num[9] = {1,2,3,4,5,6,7,8,9} ;
    int *pdan = dan ;
    int *pnum = num ;
    //변경 불가 부분 끝
    for(int i=0; i < sizeof(dan)/sizeof(int); i+=4){
        for(int j=0; j < sizeof(num)/sizeof(int); j++ ) {
                //이 부분 블록 안에서 계산하는 문장이나 값을 출력하는
                //문장에서는 위에서 선언한 dan 이나 num 배열 변수를
                //절대 사용하지 말고 포인터 변수 pdan 과 pnum 만을
                //이용하여 구구단 값을 계산하고 계산된 값을 출력하기
                //바랍니다. 
                printf("%d * %d = %d\t", *(pdan+i), *(pnum+j), (*(pdan+i)) * (*(pnum+j)) );
                printf("%d * %d = %d\t", *(pdan+i+1), *(pnum+j), (*(pdan+i+1)) * (*(pnum+j)) );
                printf("%d * %d = %d\t", *(pdan+i+2), *(pnum+j), (*(pdan+i+2)) * (*(pnum+j)) );
                printf("%d * %d = %d\n", *(pdan+i+3), *(pnum+j), (*(pdan+i+3)) * (*(pnum+j)) );
        }
        if(i==0)
            printf("\n");
    }
    return 0;
}