/**
 * ' Count Characters in Input; 1st Version '
 * Written by José Antonio Mendoza Chávez
 * Monday, June 8th, 2020
 * E-mail: ja.mendozachavez@gmail.com
 * Github: https://github.com/josantcogsci
 * LinkedIn: https://www.linkedin.com/in/josantcogsci
 */

#include <stdio.h>

/* Count characters in input; 1st Version */
int main(void)
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}
