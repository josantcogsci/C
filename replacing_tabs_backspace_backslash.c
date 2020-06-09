/**
 * ' Replacing tab, backspace, backslash '
 * Written by José Antonio Mendoza Chávez
 * Monday, June 8th, 2020
 * E-mail: ja.mendozachavez@gmail.com
 * Github: https://github.com/josantcogsci
 * LinkedIn: https://www.linkedin.com/in/josantcogsci
 */

#include <stdio.h>

int main(void)
{
    int c, d;

    while ((c = getchar()) != EOF)
    {
        d = 0;
        if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
            d = 1;
        }
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
            d = 1;
        }
        if (c == '\b')
        {
            putchar('\\');
            putchar('b');
            d = 1;
        }
        if (d == 0)
            putchar(c);
    }
}