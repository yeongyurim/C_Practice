// priority_test.c
// Test each component's priority

#include <stdio.h>

int main (void){
    puts("");
    for(int i = 0; i<= 50; ++i){
        if(i == 2)
            continue; // in the for statement, after the continue statement executes, the increment expression excutes, then the loop-continuation test is evaluated.
        printf("%3d",i);
    }
    printf("\n");
    for(int i = 0; i<= 50; ++i)
        printf("%-3d",i);
    puts("");
    for(int i = 0; i<= 50; i++)
        printf("%-3d",i);
    return 0;
}