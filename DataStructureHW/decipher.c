#include <stdio.h>

int main(void){
    int student_ID = 202313028;
    int CODE = ( (student_ID % 10000) * 3897 + (student_ID / 100000)*(student_ID / 100000) ) % 10000;
    printf("%d\n",CODE);
    return 0;
}