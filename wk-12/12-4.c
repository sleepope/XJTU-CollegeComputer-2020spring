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

#define maxn 10
#define ARRAY arr, maxn

int arr[maxn];

// output
void output(int *arr, int arr_len)
{
    printf("%d", *arr);
    for (int i = 1; i < arr_len; i++)
    {
        printf(" %d", arr[i]);
    }
}

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

// selection sort
void selection(int *arr, int arr_len)
{
    for (int i = 0; i < arr_len; i++)
    {
        int max_position = i;
        for (int j = i + 1; j < arr_len; j++)
        {
            if (arr[j] > max_position)
            {
                max_position = j;
            }
        }
        swap(arr + i, arr + max_position);
    }
}

int main()
{
    for (int i = 0; i < maxn; i++)
    {
        scanf("%d", arr + i);
    }
    bubble(ARRAY);
    output(ARRAY);
    printf("\n");
    selection(ARRAY);
    output(ARRAY);

    return 0;
}
