/**
 * ' Input to Output 1st Version '
 * Written by José Antonio Mendoza Chávez
 * Friday, June 5th, 2020
 * E-mail: ja.mendozachavez@gmail.com
 * Github: https://github.com/josantcogsci
 * LinkedIn: https://www.linkedin.com/in/josantcogsci
 */

#include <stdio.h>

/* Copy input to output; 1st version */
int main(void)
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
    
}
