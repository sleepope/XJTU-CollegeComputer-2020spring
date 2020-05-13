/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-13
 *
 * ALL COPYRIGHTS RESERVED
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct SqList
{
    int *head;  // array of list elements
    int length; // list length
    int size;   // list size
} sqlist;

// initialize a sequence list
sqlist initSqList(int size)
{
    sqlist list;
    list.head = (int *)malloc(size * sizeof(int));
    if (!list.head)
    {
        printf("Initialization failed!\n");
    }
    list.length = 0;
    list.size = size;
    return list;
}

// print the sequence list
void lprintf(sqlist list)
{
    printf("%d", *list.head);
    for (int i = 1; i < list.length; i++)
    {
        printf(" %d", list.head[i]);
    }
    printf("\n");
}

int main()
{
    int size = 10;
    sqlist list = initSqList(size);

    // fill elements
    for (int i = 0; i < size; i++)
    {
        list.head[i] = i * i;
        list.length++;
    }

    lprintf(list);

    return 0;
}
