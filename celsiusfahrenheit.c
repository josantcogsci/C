/**
 * ' Celsius-Fahrenheit '
 * Written by José Antonio Mendoza Chávez
 * Wednesday, June 3rd, 2020
 * E-mail: ja.mendozachavez@gmail.com
 * Github: https://github.com/josantcogsci
 * LinkedIn: https://www.linkedin.com/in/josantcogsci
 */

#include <stdio.h>

int main(void)
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 110;
    step = 10;

    printf("\n\tCelsius-Fahrenheit Table\n\n");
    
    celsius = lower;
    while (celsius <= upper) {
        fahr = (32 + ( celsius * (9.0/5.0) ));
        printf("\t\t%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}