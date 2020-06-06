/**
 * ' Input to Output 2nd Version Verify '
 * Written by José Antonio Mendoza Chávez
 * Saturday, June 6th, 2020
 * E-mail: ja.mendozachavez@gmail.com
 * Github: https://github.com/josantcogsci
 * LinkedIn: https://www.linkedin.com/in/josantcogsci
 */

#include <stdio.h>

/* Copy input to output; 2nd version, Verify */

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        printf("%d", getchar() != EOF);
    }
}