/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-18
 *
 * MIT LICENCE
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdio.h>
#include <string.h>

#define maxn 100

char string[maxn];

// return the position (index + 1) of key element
int search(char *string, char key)
{
    int length = strlen(string);
    for (int i = 0; i < length; i++)
    {
        if (key == string[i])
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    gets(string);
    printf("%d\n", search(string, string[search(string, '*')]));
    return 0;
}
