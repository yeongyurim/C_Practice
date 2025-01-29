#include "stdio.h"
#include "stdlib.h"
#include "Point.h"

// 리턴값이
// < 0 이면, _elem1이 _elem2보다 크다.
// = 0 이면, _elem1이 _elem2와 같다.
// > 0 이면, _elem1이 _elem2보다 작다.
int ComparePointDescend( const void *_elem1, const void *_elem2 )
{
    Point* elem1 = (Point*)_elem1;
    Point* elem2 = (Point*)_elem2;

    if ( elem1->point > elem2->point)
        return -1;
    else if ( elem1->point < elem2->point)
        return 1;
    else
        return 0;
}

int main (void){
    int Length = sizeof DataSet / sizeof DataSet[0];
    int i = 0;
 
    qsort((void*)DataSet, Length, sizeof (Point), ComparePointDescend );

    for ( i=0; i<Length; i++ )
    {
        if(i==14142-1)
            printf("%d %f",DataSet[i].id, DataSet[i].point);
    }

    printf("\n");

    return 0;
}