#include <stdio.h>

/* count lines in input 
    Exercise 1-10. Write a program to copy its input to its output,
    replacing each tab by \t, each backspace by \b, and each backslash by \\. */
int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            continue;
        }
        if (c == '\b') {
            putchar('\\');
            putchar('b');
            continue;
        }
        if (c == '\\') {
            putchar('\\');
            putchar('\\');
            continue;
        }
        putchar(c);
    }
}
