/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-11
 *
 * MIT LICENCE
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdio.h>
#include <string.h>

#define maxn 100

int main()
{
    char integer[maxn];
    gets(integer);
    int length = strlen(integer);
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", integer[i]);
    }
    printf("\n");

    return 0;
}
