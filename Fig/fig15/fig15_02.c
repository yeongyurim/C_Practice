// fig15_02.c
// Using commnad-line arguments
#include <stdio.h>

int main(int argc, char *argv[]) {
    // check number of command-line arguments
    if (argc != 3) {
        puts("Usage: mycopy infile outfile");
    }
    else {
        FILE *inFilePtr = NULL; // input file pointer

        // try to open the input file
        if ((inFilePtr = fopen(argv[1], "r")) != NULL) {
            FILE *outFilePtr = NULL; // output file pointer

            // try to open the output file
            if ((outFilePtr = fopen(argv[2], "w")) != NULL) {
                int c = 0; // holds characters read from source file

                // read and output characters
                while ((c = fgetc(inFilePtr)) != EOF) {
                    fputc(c, outFilePtr);
                }

                fclose(outFilePtr); // close the output file
            }
            else { // output file could not be opened
                printf("File \"%s\" could not be opened\n", argv[2]);
            }

            fclose(inFilePtr); // close the inputfile
        }
        else { // input file could not be opened
            printf("File \"%s\" could not be opened", argv[1]);
        }
    }
}
