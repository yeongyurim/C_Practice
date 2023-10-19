// fig04_04.c
// Calculating compound interest.
// aa
#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 1000.0; // starting principal
    double rate = 0.05; // annual interest rate

    // output table column heads
    printf("%4s%21s\n", "Year", "Amount on deposit");
    printf("%4s%-21s\n", "Year", "Amount on deposit");

    // calculate amount on deposit for each of ten years
    for (int year = 1; year <= 10; ++year) {

        // calculate new amount for specified year
        double amount = principal * pow(1.0 + rate, year);

        // output one table row
        printf("%4d%21.2f\n", year, amount);
    }
}