#include <stdio.h>

void insert(int* p, int loc, int new){
    int temp = p[loc];
    p[loc] = new;
    for(int i=loc; i<100; i++)
        p[loc+1] = temp;
}
int main (void){
    int a[100] = {};
    insert(a,0,10);
    return 0;
}