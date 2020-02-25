#include <stdio.h>

#define   LOWER  33       /* lower limit of table (it is 0 in ASCII) */
#define   UPPER  126      /* upper limit */

/* print ASCII representation of the digits table */
int main(void)
{
    int symbol;

    printf("[dec] [oct] [hex]\t[symbol]\n");
    for (symbol = LOWER; symbol <= UPPER; ++symbol)
        printf("%-5d %-5o %-5x\t%-8c\n", symbol, symbol, symbol, symbol);
}

