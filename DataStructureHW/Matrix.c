#include <stdio.h>

#define ROWS 3
#define COLS 3

#define MAX_TERMS 100

typedef struct {
    int row;
    int col;
    int value;
} element;

typedef struct SparseMatrix {
    element data[MAX_TERMS];
    int rows;	// 행의 개수
    int cols;	// 열의 개수
    int terms; 	// 항의 개수
} SparseMatrix;

SparseMatrix matrix_transpose2(SparseMatrix a) {
    SparseMatrix b;
    int bindex;		// 행렬 b에서 현재 저장 위치
    b.rows = a.cols;    b.cols = a.rows;    b.terms = a.terms;
    bindex = 0;
    for (int c = 0; c < a.cols; c++) {
        for (int i = 0; i < a.terms; i++) {
            if (a.data[i].col == c) {
                b.data[bindex].row = a.data[i].col;
                b.data[bindex].col = a.data[i].row;
                b.data[bindex].value = a.data[i].value;
                bindex++;
            }
        }
    }
    return b;
}

void sparse_matrix_print(SparseMatrix a)
{
	printf("====================\n");
	for (int i = 0; i < a.terms; i++) {
		printf("(%d, %d, %d) \n", 
                a.data[i].row, a.data[i].col, a.data[i].value);
	}
	printf("====================\n");
}


void matrix_print(int A[ROWS][COLS])
{
    printf("====================\n");
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++)
            printf("%d ", A[r][c]);
        printf("\n");
    }
    printf("====================\n");
}

void matrix_transpose(int A[ROWS][COLS], int B[COLS][ROWS])
{
    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < COLS; c++)
            B[c][r] = A[r][c];
}

int main (void) {
    int dense_matrix [ROWS][COLS] = {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};
    int transPosed_matrix [ROWS][COLS] = {};
    matrix_print(dense_matrix);
    matrix_transpose(dense_matrix,transPosed_matrix);
    matrix_print(transPosed_matrix);
}