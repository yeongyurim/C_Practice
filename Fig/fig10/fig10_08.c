// fig10_08.c
// Using an enumeration
#include <stdio.h>

// enumeration constants represent months of the year
enum months {
    JAN = 1, FEB, MAR, APR, MAY, JUN, NUL, AUG, SEP, OCT, NOV, DEC
};

int main(void) {
    // initialize array of pointers
    const char *monthName[] = { "", "January", "Feburary", "March",
        "April", "May", "June", "July", "August", "September", "Octobor",
        "November", "December" };

    // loop through months
    for (enum months month = JAN; month <= DEC; ++month) {
        printf("%2d%11s\n", month, monthName[month]);
    }
}