/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-04
 *
 * MIT LICENCE
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdbool.h>
#include <stdio.h>

#define maxn 100

int arr[100];

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
    // input
    int total_number;
    scanf("%d", &total_number);
    for (int i = 0; i < total_number; i++)
    {
        scanf("%d", arr + i);
    }

    // sort
    bubble(arr, total_number);

    // output
    int halfway = total_number / 2;
    printf("%d ", arr[0]);
    for (int i = 1; i < halfway; i++)
    {
        printf("0 ");
    }
    printf("%d", arr[total_number - 1]);
    for (int i = halfway + 1; i < total_number - 1; i++)
    {
        printf(" 0");
    }
    printf(" %d", arr[halfway]);

    return 0;
}
