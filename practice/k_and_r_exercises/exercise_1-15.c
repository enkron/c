#include <stdio.h>

#define   LOWER  0      /* lower limit of table */
#define   UPPER  300    /* upper limit */
#define   STEP   20     /* step size */

float celsius_conversion(int n);

/* print Fahrenheit-Celsius table */
int main(void)
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d\t%6.1f\n", fahr, celsius_conversion(fahr));
}

float celsius_conversion(int fahrenheit)
{
    return (5.0/9.0)*(fahrenheit-32);
}
