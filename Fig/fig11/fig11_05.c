// fig11_05.c
// Writing data randomly to a random-access file
#include <stdio.h>

// clientData structure definition
struct clientData {
    int account;
    char lastName[15];
    char firstName[10];
    double balance;
}; // end structure clientData

int main(void) {
    FILE *cfPtr = NULL; // accounts.data file pointer

    // fopen opens the file; exits if file cannot be opened
    if ((cfPtr = fopen("accounts.dat", "rb+")) == NULL) {
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information
        struct clientData client = {0, "", "", 0.0};

        // require user to specify account number
        printf("%s", "Enter account number (1 to 100, 0 to end input): ");
        scanf("%d", &client.account);

        //user enters information, which is copied into file
        while (client.account != 0) {
            // user enters last name, first name and balance
            printf("%s", "Enter last name, firstname, balance: ");

            // set record lastName, firstName and balance value
            fscanf(stdin, "%15s%9s%lf", client.lastName,
                client.firstName, &client.balance);

            // seek position in file to user-specified record
            fseek(cfPtr, (client.account - 1) *
                sizeof(struct clientData), SEEK_SET);

            // write user-specified information in file
            fwrite(&client, sizeof(struct clientData), 1, cfPtr);

            //enable user to input another account number
            printf("%s", "\nEnter account number: ");
            scanf("%d", &client.account);
        }

        fclose(cfPtr); // fclose closes the file
    }
}

// rb+ Open an existing binary file for update (reading and writing)