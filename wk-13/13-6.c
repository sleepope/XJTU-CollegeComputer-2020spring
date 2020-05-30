/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-11
 *
 * MIT LICENCE
 */

#define _AUTHOR_IS_SCIZEAL

#include <stdio.h>
#include <string.h>

#define maxn 100

// search the index of key in string[]
int search(char *string, char key)
{
    int length = strlen(string);
    for (int i = 0; i < length; i++)
    {
        if (string[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char string[maxn], key;
    gets(string);
    scanf("%c", &key);
    printf("%d\n", search(string, key));

    return 0;
}
