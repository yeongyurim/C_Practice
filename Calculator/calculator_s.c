// calculator_s.c
// implement the calculator_s.h

#include "calculator_s.h"

void calculate (Node opearand1, Node opearand2, Mode operator){
    switch(operator) {
        case PLUS: 
            Plus(Node operand1, Node opearand2);
            break;

        case MINUS: 
            Minus(Node operand1, Node opearand2)
            break;

        case PRODUCT: 
            Product(Node operand1, Node opearand2);
            break;

        case DEVIDE: 
            Divide(Node operand1, Node opearand2);
            break;
            
        default : break;
    }
}

void Plus      (Node opearand1, Node opearand2);
void Minus     (Node opearand1, Node opearand2);
void Product   (Node opearand1, Node opearand2);
void Divide    (Node opearand1, Node opearand2);