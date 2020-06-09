/**
 * ' Print a histogram of the lengths of words '
 * Written by José Antonio Mendoza Chávez
 * Tuesday, June 9th, 2020
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
        if (c == ' ' || c == '\n' || c == '\t')
            putchar('\n');
        else
            putchar('*');
    }
}