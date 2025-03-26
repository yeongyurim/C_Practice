#include "stdio.h"

int main (void) {
    int n, average, max = 0, sum, scores[1000];
    float result;
    
    scanf("%d",&n);

    for(int i=0; i<n; i++) {
        scanf("%f",&scores[i]);
        if(scores[i] > max)
            max = scores[i];
    }

    for(int i=0; i<n; i++) {
        scores[i] = (float)scores[i]/max*100;
        sum += scores[i];
    }

    result = sum/n;
    printf("%f",result);
    return 0;
}