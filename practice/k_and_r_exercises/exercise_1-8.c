#include <stdio.h>

/* count lines in input 
    Exercise 1-8. Write a program to count blanks, tabs, and newlines. */
int main(void)
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n' || c == '\t' || c == ' ')
            ++nl;
    printf("%d\n", nl);
}
