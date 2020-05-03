/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-04-27
 *
 * ALL COPYRIGHTS RESERVED
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdio.h>
#include <string.h>

#define maxn 100 // Warning: MSVC doesn't support dynamic array!!!

int main()
{
    char string1[maxn]; // `string` is a C++ keyword.
    gets(string1);      // `gets()` is unsafe but whatever
    int Begin_Excludes_White_Space = 0;
    int End_Excludes_White_Space = maxn;
    int length = strlen(string1);

    // Find Begin_Excludes_White_Space
    for (int i = 0; i < length; i++)
    {
        if (string1[i] != ' ')
        {
            Begin_Excludes_White_Space = i;
            break;
        }
    }

    // Find End_Excludes_White_Space
    for (int i = length - 1; i >= 0; i--)
    {
        if (string1[i] != ' ')
        {
            End_Excludes_White_Space = i;
            break;
        }
    }

    // output
    for (int i = 0; i < length; i++)
    {
        if (string1[i] == ' ' && i >= Begin_Excludes_White_Space && i <= End_Excludes_White_Space)
        {
            continue;
        }
        printf("%c", string1[i]);
    }

    return 0;
}
