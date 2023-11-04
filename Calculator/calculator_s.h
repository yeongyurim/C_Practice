// calculator_s.h
// overflow proofed calculator

#include <stdio.h>
#include <LinkedListStack.h>
#include <LinkedQueue.h>

enum Mode {PLUS,MINUS,PRODUCT,DEVIDE};

void Calculate (Node opearand1, Node opearand2, Mode operator);

void Plus      (Node opearand1, Node opearand2);
void Minus     (Node opearand1, Node opearand2);
void Product   (Node opearand1, Node opearand2);
void Divide    (Node opearand1, Node opearand2);