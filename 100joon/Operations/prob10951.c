// prob10951.c
// add two opearands
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a[50], b[50];
    
    int i = 0;
    while(1){
        scanf("%d",&a[i]);
        if(a[i]=='\0') break;
        scanf("%d",&b[i]);
    }
    while(++a[i]){
        printf("%d", a[i] + b[i]);
    }
}