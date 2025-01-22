#include "stdio.h"
// C언어에서는 배열의 크기를 변수로 받아 지정할 수 없다.
int main (void) {
    int baskets [100];
    int N, M = 0;
    scanf("%d %d", &N, &M);
    
    for(int i=0; i<N; i++)
        baskets[i] = i+1;

    for(int i=0; i<M; i++) {
        int j, k = 0;
        scanf("%d %d", &j, &k);

        for(j-=1,k-=1; j<k; j++,k--) {
                int temp = baskets[j];
                baskets[j] = baskets[k];
                baskets[k] = temp;
        }
    }

    for(int i=0; i<N; i++) {
        printf("%d ", baskets[i]);
    }

    return 0;
}