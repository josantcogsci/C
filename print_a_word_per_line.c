/**
 * ' Print one word per line '
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

    while((c = getchar()) != EOF)
    {
        if(c==' ' || c=='\t' || c=='\b')
        {
            printf("\n");
            while(c==' ' || c=='\t' || c=='\b')
            c=getchar();
        }
        if(c!=EOF)
        putchar(c);
    }
}