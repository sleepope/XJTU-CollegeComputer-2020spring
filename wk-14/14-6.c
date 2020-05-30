/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-18
 *
 * MIT LICENCE
 */

#define _AUTHOR_IS_SCIZEAL

#include <stdbool.h>
#include <stdio.h>

#define maxn 100
int arr[maxn] = {0};

int main()
{
    int m, n, num;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &num);
        arr[num] += 1;
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        arr[num] += 1;
    }

    bool flag = false;
    for (int i = 0; i < maxn; i++)
    {
        if (arr[i] == 1)
        {
            if (flag)
            {
                printf(" ");
            }
            printf("%d", i);
            flag = true;
        }
    }

    return 0;
}
