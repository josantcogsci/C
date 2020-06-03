/**
 * ' Fahrenheit-Celsius '
 * Written by José Antonio Mendoza Chávez
 * Wednesday, June 3rd, 2020
 * E-mail: ja.mendozachavez@gmail.com
 * Github: https://github.com/josantcogsci
 * LinkedIn: https://www.linkedin.com/in/josantcogsci
 */

#include <stdio.h>

/* print Fahrenhei-Celsius table
    for fahr = 0, 20, ..., 300 */
int main(void)
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("\t%3d\t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}