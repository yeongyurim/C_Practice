// prob2525.c
// how to deal number
#include <stdio.h>

int main(void) {
    short hour, min, add;
    scanf("%hd %hd %hd", &hour, &min, &add);
    
    hour += add / 60;
    min += add % 60;

    if(min > 59){
        min -= 60;
        hour++;
    }
    if(hour > 23)
        hour %= 24;
    printf("%d %d", hour, min);
}