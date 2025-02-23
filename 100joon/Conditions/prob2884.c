// prob2884.c
// 45 min earlier alarm

#include <stdio.h>

int main(void) {
    short hour, min;
    scanf("%hu %hu", &hour, &min); // %hu == unsigned short

    if (min < 45) {
        if (hour < 1)
            hour = 23;
        else 
            hour -= 1;
        short hold = min - 45;
        min = 60 + hold;
    }
    else
        min -= 45;
    
    printf("%d %d", hour, min);
}