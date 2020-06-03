/**
 * ' Fahrenheit-Celsius2 '
 * Written by José Antonio Mendoza Chávez
 * Wednesday, June 3rd, 2020
 * E-mail: ja.mendozachavez@gmail.com
 * Github: https://github.com/josantcogsci
 * LinkedIn: https://www.linkedin.com/in/josantcogsci
 */

#include <stdio.h>

/* print Fhrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("\n\tFahrenheit-Celsius Table\n\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("\t\t%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}