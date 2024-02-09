#include <stdio.h>

int main(void) {
    int a = 0;
    char string [] = "";
    scanf("%d", &a);
    if (a < 1)
        printf("");
    else {
        for(int i = 0; i < a; i += 4){
        printf("long ");
        }
        printf("int");
    }
    return 0;
}