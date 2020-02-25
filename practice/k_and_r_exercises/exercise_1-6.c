#include <stdio.h>

/* copy input to output; 2nd version
    Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1. */
int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
}
