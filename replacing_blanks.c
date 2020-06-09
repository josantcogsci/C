/**
 * ' Replacing blanks '
 * Written by José Antonio Mendoza Chávez
 * Monday, June 8th, 2020
 * E-mail: ja.mendozachavez@gmail.com
 * Github: https://github.com/josantcogsci
 * LinkedIn: https://www.linkedin.com/in/josantcogsci
 */

#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            putchar(c);
            while ((c = getchar()) == ' ')
                ;
        }
        if (c != ' ')
            putchar(c);
    }
}