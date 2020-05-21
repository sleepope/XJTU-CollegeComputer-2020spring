/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-04-27
 *
 * MIT LICENCE
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdio.h>
#include <string.h>

#define maxn 100

int main()
{
    char string1[maxn];
    scanf("%s", string1);
    int length = strlen(string1);
    for (int i = 0; i < length; i++)
    {
        for (int j = length - i - 1; j < length; j++)
        {
            printf("%c", string1[j]);
        }
        if (i == length - 1)
        {
            printf("\n");
            break;
        }
        printf(" ");
    }

    return 0;
}
