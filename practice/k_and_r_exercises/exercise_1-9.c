#include <stdio.h>

/* count lines in input 
    Exercise 1-9. Write a program to copy its input to its output,
    replacing each string of one or more blanks by a single blank. */
int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            while ((c = getchar()) == ' ')
                ;
            putchar(' ');
            if (c == EOF)
                break;
        }
        putchar(c);
    }
}
