#include "stdio.h"

int main (void) {
    int remainders [10];
    int diff [10];
    int count = 0;

    for(int i=0; i<10; i++){
        int temp;
        scanf("%d",&temp);
        remainders[i] = temp % 42;
    }

    for(int i=0; i<10; i++) {
        for(int j=i+1; j<10; j++) {
            if(remainders[j] == 43) {

            }
            else if(remainders[i] == remainders[j]){
                remainders[j] = 43;
            }
        }
    }
    for(int i=0; i<10; i++) {
        if(remainders[i] != 43)
            count++;
    }
    printf("%d", count);
    return 0;
}