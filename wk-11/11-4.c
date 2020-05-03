/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-04-27
 *
 * ALL COPYRIGHTS RESERVED
 */

#define __AUTHOR__IS__SCIZEAL__

#include <ctype.h>
#include <stdio.h>

// assume the maximum frequency is 10
#define MAX_FREQ 10

int main()
{
    // frequency[ASCII for each letter] is the corresponding frequency
    int frequency[128] = {0};
    char c;

    // lowercase --> uppercase
    while ((c = toupper(getchar())) != '\n')
    {
        frequency[c]++;
    }

    // maybe not the best way to sorting
    int count = 0;
    for (int j = MAX_FREQ; j >= 0; j--)
    {
        for (int i = 'A'; i <= 'Z'; i++)
        {
            if (frequency[i] == j)
            {
                printf("%c-%d", i, j);
                count++;

                // prevent whitespace in the end of output
                if (count != 26)
                {
                    printf(" ");
                }
            }
        }
    }

    return 0;
}
