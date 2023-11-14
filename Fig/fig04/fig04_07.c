// fig04_07.c
// Using the break statement in a for statement.
# include <stdio.h>

int main(void) {
    int x = 1; // declared here so it can be used after loop

    // loop 10 times
    for (; x <= 10; ++x) {
        // if x is 5, terminate loop
        if (x == 5) {
            break; // break loop only if x is 5
        }

        printf("%d ", x);
    }

    printf("\nBroke out of loop at x == %d\n", x);
}