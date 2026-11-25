#include <stdio.h>

void studentResult(int (*) [3], int *, int *, float *, float *); // 함수 프로토타입

int main (void) {
    int score[3][3] = {
        {80, 90, 70},
        {95, 85, 90},
        {70, 80, 60}
    };
    int (*ps) [3] = score;

    int score_sum[3] = {0,}; // 학생별 총점 변수입니다.
    int subject_sum[3] = {0,}; // 과목별 총점 변수입니다.
    float avgs[3] = {0,}; // 학생별 평균 변수입니다.
    float subject_avgs[3] = {0,}; // 과목별 평균 변수입니다.
    char* subjects[3] = {"국어","영어","수학"}; // 출력용 과목 이름 배열입니다.

    studentResult(ps, score_sum, subject_sum, avgs, subject_avgs); // 학생별 총점과 평균, 과목별 총점과 평균을 계산합니다.

    printf("========== 학생 성적 처리 ==========\n");
    printf("학생번호 국어 영어 수학\n");
    printf("------------------------------------\n");
    for(int i=0; i<3; i++) { // 학생별 과목별 성적을 출력합니다.
        printf("%d번 학생 %3d %3d %3d\n", i+1, *(*(ps+i)+0), *(*(ps+i)+1), *(*(ps+i)+2));
    }

    printf("========== 학생별 성적 ==========\n");
    for(int i=0; i<3; i++) { // 학생별 총점과 평균을 출력합니다.
        printf("%d번 학생 총점 : %d, 평균 = %.2f\n", i+1, score_sum[i], *(avgs+i));
    }

    printf("========== 과목별 평균 ==========\n");
    for(int i=0; i<3; i++) { // 과목별 평균을 출력합니다.
        printf("%s 평균 : %.2f\n", *(subjects+i), *(subject_avgs+i));
    }
    return 0;
}

// 학생별 총점과 평균, 과목별 총점과 평균을 계산하는 함수입니다.
/*
학생별 과목별 성적 데이터를 가지고 있는 배열포인터 ps를 가져와
학생별 총점 배열인 score_sum
과목별 총점 배열인 subject_sum
학생별 평균 배열인 avgs
과목별 평균 배열인 subject_avgs를 초기화합니다.
*/
void studentResult(int (*ps) [3], int *score_sum, int *subject_sum, float * avgs, float *subject_avgs) {
    for(int i=0; i<3; i++) {
        *(score_sum+i) = *(*(ps+i)+0) + *(*(ps+i)+1) + *(*(ps+i)+2); // 학생별 총점을 구합니다.
        *(subject_sum+0) += *(*(ps+i)+0); // 과목별 총점을 구합니다.
        *(subject_sum+1) += *(*(ps+i)+1);
        *(subject_sum+2) += *(*(ps+i)+2);

        *(avgs+i) =  (float)*(score_sum+i) / 3; // 학생별 평균을 구합니다.
    }
    for(int i=0; i<3; i++){
        *(subject_avgs+i) =  (float)*(subject_sum+i) / 3; // 과목별 평균을 구합니다.
    }
}