/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-04-27
 *
 * MIT LICENCE
 */

#define _AUTHOR_IS_SCIZEAL

#include <ctype.h>
#include <stdio.h>

char UpperCase[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZABC"};
char LowerCase[] = {"abcdefghijklmnopqrstuvwxyzabc"};

int main()
{
    char c;
    while ((c = getchar()) != '\n')
    {
        if (isupper(c))
        {
            printf("%c", LowerCase[tolower(c) - 'a' + 3]);
        }
        if (islower(c))
        {
            printf("%c", UpperCase[toupper(c) - 'A' + 3]);
        }
    }

    return 0;
}
