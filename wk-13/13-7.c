/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-11
 *
 * ALL COPYRIGHTS RESERVED
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdio.h>
#include <string.h>

#define maxn 100

// print whitespace * n
void whitespace_printf(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

int main()
{
    char string[maxn];
    gets(string);
    int length = strlen(string);
    int side_length = (length + 2) / 3;

    // front rows
    for (int i = 0; i < side_length - 1; i++)
    {
        printf("%c", string[i]);
        whitespace_printf(length - 2 * side_length);
        printf("%c\n", string[length - 1 - i]);
    }

    // last row
    for (int i = side_length - 1; i <= length - side_length; i++)
    {
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}
