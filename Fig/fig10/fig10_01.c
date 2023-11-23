// fig10_01.c
// Structure member operator and
// structure pointer operator
#include <Stdio.h>

// card structure definition
struct card {
    const char *face; // define pointer face
    const char *suit; // define pointer suit
};

int main(void) {
    struct card myCard; // define one struct card variable

    // place strings into myCard
    myCard.face = "Ace";
    myCard.suit = "Spades";

    struct card *cardPtr = &myCard; // assign myCard's address to cardPtr

    printf("%s of %s\n", myCard.face, myCard.suit);
    printf("%s of %s\n", cardPtr->face, cardPtr->suit);
    printf("%s of %s\n", (*cardPtr).face, (*cardPtr).suit);
}
// #1 the structure member operator and variable name myCard
// #2 the structure pointer operator and pointer cardPtr
// #3 the structure member operator with dereferenced pointer cardPtr