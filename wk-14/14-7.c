/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-18
 *
 * MIT LICENCE
 */

#define _AUTHOR_IS_SCIZEAL

#include <stdio.h>

#define maxn 20

int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int insert[maxn];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", insert + i);
    }
    int pos;
    scanf("%d", &pos);

    printf("%d", *arr);
    for (int i = 1; i < pos; i++)
    {
        printf(" %d", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf(" %d", insert[i]);
    }
    for (int i = pos; i < 10; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}
