/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-04
 *
 * ALL COPYRIGHTS RESERVED
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdbool.h>
#include <stdio.h>

#define maxn 100

int arr[maxn];

// swap the value of 2 integers
void swap(int *p, int *q)
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

// bubble sort
void bubble(int *arr, int arr_len)
{
    for (int i = 0; i < arr_len - 1; i++)
    {
        bool is_sorted = true;
        for (int j = 0; j < arr_len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr + j, arr + j + 1);
                is_sorted = false;
            }
        }
        if (is_sorted)
        {
            break;
        }
    }
}

int main()
{
    int total_number;
    scanf("%d", &total_number);
    for (int i = 0; i <= total_number; i++)
    {
        scanf("%d", arr + i);
    }

    bubble(arr, total_number + 1);

    printf("%d", *arr);
    for (int i = 1; i <= total_number; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}
