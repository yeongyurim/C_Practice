// prob2480.c
// three die gamble
// get 3 face from each die 
// and compare for each
#include <stdio.h>

int getPrize(int f1, int f2, int f3); // prototype

int main (void){
    int face1, face2, face3, prize;
    scanf("%d %d %d", &face1, &face2, &face3);
    prize = getPrize(face1, face2, face3);
    
    printf("%d\n", prize);
}

int getPrize(int face1, int face2, int face3){
    if (face1 == face2 || 
        face2 == face3 || 
        face1 == face3){
        if (face1 == face2 && face2 == face3) {
            return 10000 + face1 * 1000;
        }
        else {
            if (face1 == face2)
                return 1000 + face1 * 100;
            else
                return 1000 + face3 * 100;
        }
    }
    else {
        if (face1 > face2 && face1 > face3) 
            return face1 * 100;
        else if(face2 > face3) 
            return face2 * 100;
        else 
            return face3 * 100;
    }
}