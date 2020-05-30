/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-11
 *
 * MIT LICENCE
 */

#define _AUTHOR_IS_SCIZEAL

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define maxn 6000

bool soldier[maxn];

// knockout specified soldier
void knockout(int num)
{
    int index = 0;      // index of soldier
    int count = 0;      // from 0 to factor
    int in_queue = num; // number of in-queue soldiers
    int factor = 2;     // switch between 2 and 3
    while (in_queue > 3)
    {
        if (soldier[index])
        {
            count++;
            if (count == factor)
            {
                soldier[index] = false;
                in_queue--;
                count = 0;
            }
        }
        index++;
        if (index >= num)
        {
            index = count = 0;
            factor = 6 / factor;
        }
    }
}

int main()
{
    memset(soldier, true, sizeof(soldier));

    int num;
    scanf("%d", &num);

    knockout(num);

    int printed = 0;
    for (int i = 0; i < num; i++)
    {
        if (soldier[i])
        {
            printf("%d", i + 1);
            printed++;
            if (printed == 3)
            {
                printf("\n");
                break;
            }
            printf(" ");
        }
    }

    return 0;
}
