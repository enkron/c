#include <stdio.h>

#define   LOWER  33       /* lower limit of table (it is 0 in ASCII) */
#define   UPPER  126      /* upper limit */

/* count digits, white space, others
 * Write a program to print a histogram of the frequencies of
 * different characters in its input. */

int main(void)
{
    int c, i, j, k,  state;
    int nsymbol[UPPER-LOWER];
    char symbols[UPPER-LOWER];

    for (i = 0; i < UPPER-LOWER; ++i)
        nsymbol[i] = 0;

    for (j = LOWER, k = 0; j <= UPPER; ++j, ++k)
        symbols[k] = j;

    while ((c = getchar()) != EOF)
       for (i = 0; i < UPPER-LOWER; ++i)
           if (c == symbols[i])
               ++nsymbol[i];

    for (i = 0; i < UPPER-LOWER; ++i) {
        printf("[%c] %-4d ", symbols[i], nsymbol[i]);
        for (j = 0; j < nsymbol[i]; j++)
            printf("|");
        printf("\n");
    }
}
