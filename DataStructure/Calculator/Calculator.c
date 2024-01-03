#include "Calculator.h"

char NUMBER[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.'};

int IsNumber( char Cipher ) {
    int i = 0;
    int ArrayLength = sizeof(NUMBER);

    for ( i=0; i < ArrayLength; i++ ){
        if ( Cipher == NUMBER[i])
            return 1;
    }

    return 0;
}

unsigned int GetNextToken( char* Expression, char* Token, int* TYPE ) {
    unsigned int i = 0;

    for ( i=0 ; 0 != Expression[i]; i++)
    {
        Token[i] = Expression[i];

        if ( IsNumber( Expression[i]) == 1){
            *TYPE = OPERAND;

            if ( IsNumber(Expression[i+1]) != 1 )
                break;
        }
        else {
            *TYPE = Expression[i];
            break;
        }
    }

    Token[++i] = '\0';
    return
}