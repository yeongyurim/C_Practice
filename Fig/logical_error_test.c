// logical_error_test.c
// complie of error statements 

#include <stdio.h>

int main (void) {

    int payCode = 0;
    while(payCode != EOF){
        scanf("Type your pay code :",&payCode);
        if(4 == payCode){
            puts("You got a bonus!");
        }
        if(3 = payCode){ // lvalues can protect from mistyping
            puts("You are fired!");
        }
    }
    return 0;
}