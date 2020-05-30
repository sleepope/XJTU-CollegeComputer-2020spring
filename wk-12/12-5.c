/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-04
 *
 * MIT LICENCE
 */

#define _AUTHOR_IS_SCIZEAL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxn 1000

int arr[maxn];
char str[maxn];

void swap(int *p, int *q)
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

void selection(int *arr, int arr_len)
{
    for (int i = 0; i < arr_len; i++)
    {
        int min_position = i;
        for (int j = i + 1; j < arr_len; j++)
        {
            if (arr[j] < arr[min_position])
            {
                min_position = j;
            }
        }
        swap(arr + i, arr + min_position);
    }
}

int main()
{
    scanf("%s", str);
    int arr_count = 0, subscript_begin = 0, length = strlen(str);
    str[length] = '5';
    for (int i = 0; i <= length; i++)
    {
        if (str[i] == '5')
        {
            str[i] = '\0';
            if (str[subscript_begin] != '\0')
            {
                arr[arr_count++] = atoi(str + subscript_begin);
            }
            subscript_begin = i + 1;
        }
    }

    selection(arr, arr_count);
    printf("%d", *arr);
    for (int i = 1; i < arr_count; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}
