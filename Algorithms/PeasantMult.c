#include <stdio.h>
// peasant multiplication은 y를 x만큼 곱한다는 개념에서 시작한다.
int PeasantMultiplication(int x,int y) {
    if(x==0)
        return 0;
    else
        x = x/2;
        y = y + y;
        int prod = PeasantMultiplication(x,y);
        if (x%2 == 1)
            prod = prod + y;
        return prod;
}
int main (void){
    printf("%d\n",PeasantMultiplication(6,12));
}