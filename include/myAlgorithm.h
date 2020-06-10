/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-06-10
 *
 * MIT LICENCE
 */

#include <stdbool.h>
#include <stdio.h>

int cmp(const void *a, const void *b);
void swap(int *p, int *q);
void print(int *arr, int length);

int sqSearch(int *arr, int length, int key);
int binSearch(int *arr, int length, int key);

void bubbleSort(int *arr, int length);
void selectSort(int *arr, int length);
void quickSort(int *arr, int begin, int end);

// swap 2 integers
void swap(int *p, int *q)
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

// compare 2 integers
int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

// print array
void print(int *arr, int length)
{
    printf("%d", *arr);
    for (int i = 1; i < length; i++)
    {
        printf(" %d", *(arr + i));
    }
    printf("\n");
}

// sequential search
int sqSearch(int *arr, int length, int key)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

// binary search
int binSearch(int *arr, int length, int key)
{
    int begin = 0, end = length - 1, mid;
    while (begin <= end)
    {
        mid = (begin + end) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        if (key > arr[mid])
        {
            begin = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

// bubble sort
void bubbleSort(int *arr, int length)
{
    bool flag = true;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr + j, arr + j + 1);
                flag = false;
            }
        }
        if (flag)
        {
            break;
        }
    }
}

// selection sort
void selectSort(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        int min = arr[i], index = i;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                index = j;
            }
        }
        swap(arr + i, arr + index);
    }
}

// partition array
int partition(int *arr, int begin, int end)
{
    int pivot = arr[begin], index = begin;
    for (int i = begin + 1; i < end; i++)
    {
        if (arr[i] < pivot)
        {
            index++;
            swap(arr + i, arr + index);
        }
    }
    swap(arr + index, arr + begin);
    return index;
}

// quick sort
void quickSort(int *arr, int begin, int end)
{
    if (begin >= end)
    {
        return;
    }

    int pivotIndex = partition(arr, begin, end);
    quickSort(arr, begin, pivotIndex);
    quickSort(arr, pivotIndex + 1, end);
}
