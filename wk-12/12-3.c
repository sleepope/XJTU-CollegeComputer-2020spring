/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-04
 *
 * ALL COPYRIGHTS RESERVED
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdio.h>
#include <string.h>

#define maxn 100

int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

int bin_search(int *arr, int position_min, int position_max, int key)
{
    int halfway;
    while (position_min < position_max)
    {
        halfway = position_min + (position_max - position_min) / 2;
        if (arr[halfway] == key)
        {
            return halfway;
        }
        else if (arr[halfway] > key)
        {
            position_max = halfway;
        }
        else
        {
            position_min = halfway + 1;
        }
    }
    return -1;
}

int main()
{
    int key;
    scanf("%d", &key);
    printf("%d\n", bin_search(a, 0, 14, key));

    return 0;
}
