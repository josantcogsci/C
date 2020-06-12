/**
 * ' Print longest input line. Revision. '
 * Written by José Antonio Mendoza Chávez
 * Thursday, June 11th, 2020
 * E-mail: ja.mendozachavez@gmail.com
 * Github: https://github.com/josantcogsci
 * LinkedIn: https://www.linkedin.com/in/josantcogsci
 */

#include <stdio.h>
#define MAXLINE 10

int my_getline(char line[], int maxline);
void copy(char to[], char form[]);

/* print longest input line. */
int main(void)
{
    int len;               /* current line length */
    int max;               /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest lin saved here */
    char c;

    max = 0;
    while ((len = my_getline(line, MAXLINE)) > 0)
    {
        if (line[len - 1] != '\n')
        {
            while ((c = getchar()) != EOF && c != '\n')
                len++;
        }
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) /* there was a line */
        printf("the count of characters is %d, and its content is %s", max, longest);
    return 0;
}

/* getline: read a line into s, return length */
int my_getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}