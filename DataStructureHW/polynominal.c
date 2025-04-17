#include <stdio.h>
#define MAX_DEGREE 101
#define MAX(a, b) ((a) > (b) ? (a) : (b))

typedef struct {
    int degree;
    float coef[MAX_DEGREE];
} polynominal;

polynominal poly_add1(polynominal A, polynominal B)
{
    polynominal C;
    int Apos = 0, Bpos = 0, Cpos =0;
    int degree_a = A.degree, degree_b = B.degree;
    C.degree = MAX(A.degree, B.degree);
    while(Apos <= A.degree && Bpos <= B.degree) {
        if(degree_a > degree_b) {
            C.coef[Cpos++] = A.coef[Apos++];
            degree_a--;
        } else if (degree_a == degree_b) {
            C.coef[Cpos++] = A.coef[Apos++] + B.coef[Bpos++];
            degree_a--, degree_b--;
        } else {
            C.coef[Cpos++] = B.coef[Bpos++];
            degree_b--;
        }
    }
    return C;
}
void print_poly(polynominal p)
{
    for (int i= p.degree; i>0; i--){
        if(p.coef[p.degree - i] != 0)
            printf("%3.1fx^%d + ", p.coef[p.degree - i], i);
    }
    printf("%3.1f\n", p.coef[p.degree]);
}

int main (void)
{
    polynominal a = {5, {10, 0, 0, 0, 6, 3} };
    polynominal b = {4, {7, 0, 5, 0, 1}};
    polynominal c = poly_add1(a,b);

    print_poly(a);
    print_poly(b);
    print_poly(c);
}