/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-04-20
 *
 * MIT LICENCE
 */

#define _AUTHOR_IS_SCIZEAL

#include <stdio.h>

#define infty 1000

int main()
{
    int current_number, min_number = infty, location = 0;
    for (int count = 0; count < 10; count++)
    {
        scanf("%d", &current_number);
        if (current_number < min_number)
        {
            min_number = current_number;
            location = count;
        }
    }
    printf("%d %d\n", min_number, location);

    return 0;
}
