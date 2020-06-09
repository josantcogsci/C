/**
 * ' Count blanks, tabs, newlines '
 * Written by José Antonio Mendoza Chávez
 * Monday, June 8th, 2020
 * E-mail: ja.mendozachavez@gmail.com
 * Github: https://github.com/josantcogsci
 * LinkedIn: https://www.linkedin.com/in/josantcogsci
 */

#include <stdio.h>

/* count blanks, tabs, newlines */
int main(void)
{
    int c, bnk, tab, nl;

    bnk = 0;
    tab = 0;
    nl = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++bnk;
        if (c == '\t')
            ++tab;
        if ( c == '\n'  )
            ++nl;
    }


    printf("Blanks: %d\nTabs: %d\nNew lines: %d\n", bnk, tab, nl);
        
}