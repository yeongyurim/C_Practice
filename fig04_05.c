// fig04_05.c
// Counting letter grades with switch
#include <stdio.h>

int main(void) {
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the E0F character to end input.");
    int grade = 0; // one grade

    // loop until user types end-of-file key sequence
    while ((grade = getchar()) != EOF) {

        // determine which grade was input
        switch (grade) {
            case 'A' : // grade was uppercase A
            case 'a' : // or lowercase a
                ++aCount;
                break; // necessaryto exit switch
            case 'B' :
            case 'b' :
                ++bCount;
                break;
            case 'C' :
            case 'c' :
                ++cCount;
                break;
            case 'D' :
            case 'd' :
                ++dCount;
                break;
            case 'F' :
            case 'f' :
                ++fCount;
                break;
            case '\n' : // ignore newlines,
            case '\t' : // tabs,
            case ' ' : // and spaces in input
                break;
            default: // catch all other characters
                printf("%s", "Incorrect letter grade entered.");
                puts(" Enter a new grade.");
                break;
        } // end switch
    } // end while

    // output summary of results
    puts("\nTotals for each letter grade are:");
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("F: %d\n", fCount);
}