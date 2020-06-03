/**
 * ' FahrenheitCelsius For-loop '
 * Written by José Antonio Mendoza Chávez
 * Wednesday, June 3rd, 2020
 * E-mail: ja.mendozachavez@gmail.com
 * Github: https://github.com/josantcogsci
 * LinkedIn: https://www.linkedin.com/in/josantcogsci
 */

#include <stdio.h>

int main(void)
{
    int fahr;

    printf("\t\nFahrenheit-Celsius For-loop Table\n\n");
    for (fahr = 300; fahr > 0; fahr = fahr - 20)
        printf("\t%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}