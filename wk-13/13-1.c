/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-11
 *
 * MIT LICENCE
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdio.h>
#include <stdlib.h>

#define maxn 100

typedef struct SqList
{
    char *head;
    int length;
    int size;
} sqlist;

// initialize a sequence list with size
sqlist initSqList(int size)
{
    sqlist list;
    list.head = (char *)malloc(size * sizeof(char));
    if (!list.head)
    {
        exit(0);
    }
    list.length = 0;
    list.size = size;
    return list;
}

// output a sequence list
void lprintf(sqlist list)
{
    for (int i = 0; i < list.length; i++)
    {
        printf("%c", list.head[i]);
    }
    printf("\n");
}

// find element in the sequence list by sequential search
int findElement(sqlist list, char element)
{
    for (int i = 0; i < list.length; i++)
    {
        if (element == list.head[i])
        {
            return i;
        }
    }
    return -1;
}

// remove element out of sequence list
sqlist removeElement(sqlist list, char element)
{
    while (findElement(list, element) >= 0)
    {
        int index = findElement(list, element);
        for (int i = index + 1; i < list.length; i++)
        {
            list.head[i - 1] = list.head[i];
        }
        list.length--;
    }
    return list;
}

int main()
{
    sqlist list = initSqList(maxn);
    char c;
    while ((c = getchar()) != '\n')
    {
        list.head[list.length++] = c;
    }
    lprintf(list);
    printf("%d\n", list.length);

    scanf("%c", &c);
    list = removeElement(list, c);
    lprintf(list);
    printf("%d\n", list.length);

    return 0;
}
