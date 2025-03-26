/*
1. 시험 본 과목 개수 n 입력받기
2. n회 반복하여 과목 점수 받기
3. 과목 점수들 중 최댓값 찾기
4. 최댓값 기반으로 과목 점수들 조정하기
5. 조정된 결과 값들로 새로운 평균 구하기
6. 새로운 평균 출력
*/
#include <stdio.h>

int main (void)
{
    int n, max= 0;
    float scores[1000], sum = {0};

    scanf("%d",&n);
    
    for(int i=0; i<n; i++) 
    {
        scanf("%f", &scores[i]);
        if(scores[i] > max)
            max = scores[i];
    }

    for(int i=0; i<n; i++)
    {
        sum += scores[i] / max * 100;
    }
    printf("%f", sum/n);
    return 0;
}