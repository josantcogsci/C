/**
 * ' Celsius-Fahrenheit '
 * Written by José Antonio Mendoza Chávez
 * Thursday, June 4th, 2020
 * E-mail: ja.mendozachavez@gmail.com
 * Github: https://github.com/josantcogsci
 * LinkedIn: https://www.linkedin.com/in/josantcogsci
 */

#include <stdio.h>

#define LOWER 0         /* lower limit of the table */
#define UPPER 300       /* upper limit */
#define STEP 20         /* step size */


int main(void)
{
    printf("\n\tFahrenheit-Celsius Table\n\n");
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("\t\t%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
} 