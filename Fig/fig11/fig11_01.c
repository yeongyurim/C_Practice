// fig11_01.c
// Creating a sequential file
#include <stdio.h>

int main(void){
    FILE *cfPtr = NULL; // cfPtr = clients.txt file pointer

    // fopen opens the file. Exit the program if unable to create the file
    if ((cfPtr = fopen("clients.txt", "w")) == NULL) {
        puts("File could not be opened.");
    }
    else {
        puts("Enter the account, name, and balance.");
        puts("Enter EOF to end input.");
        printf("%s", "? ");

        unsigned long long account = 0; // account number
        char name[30] = ""; // account name
        double balance = 0.0; // account balance

        scanf("%llu%29s%lf", &account, name, &balance);

        // write account, name and balance into file with fprintf
        while(!feof(stdin)) {
            fprintf(cfPtr, "%llu %s %.2f\n", account, name, balance);
            printf("%s", "? ");
            scanf("%llu%29s%lf", &account, name, &balance);
        }

        fclose(cfPtr); // fclose closes file
    }
}