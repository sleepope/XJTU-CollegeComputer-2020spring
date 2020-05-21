/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-18
 *
 * MIT LICENCE
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdio.h>

typedef struct mustLose
{
    int pileA;
    int pileB;
} lose;

#define maxn 10000
lose set[maxn];

int count[maxn];

// return the minimun integer in count[maxn]
// (could be optimized)
int minInt()
{
    for (int i = 1; i < maxn; i++)
    {
        if (!count[i])
        {
            return i;
        }
    }
    return -1;
}

// generate mustLose set
void generate(int diff)
{
    count[set[1].pileA = 1]++;
    count[set[1].pileB = 2]++;
    for (int i = 2; i <= diff; i++)
    {
        count[set[i].pileA = minInt()]++;
        count[set[i].pileB = set[i].pileA + i]++;
    }
}

int main()
{
    int pileX, pileY;
    scanf("%d%d", &pileX, &pileY);

    // pileX <= pileY
    if (pileX > pileY)
    {
        int tmp = pileX;
        pileX = pileY;
        pileY = tmp;
    }

    int diff = pileY - pileX;
    generate(diff);

    // if in the mustLose set
    if (pileX == set[diff].pileA)
    {
        printf("0\n");
        return 0;
    }
    printf("1\n");
    return 0;
}
