/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-18
 *
 * MIT LICENCE
 */

#define _AUTHOR_IS_SCIZEAL

#include <stdio.h>

int maxDivisor(int p, int q)
{
    while (q)
    {
        int r = p % q;
        if (r == 0)
        {
            return q;
        }
        p = q;
        q = r;
    }
    return -1;
}

int main()
{
    int p, q;
    scanf("%d,%d", &p, &q);

    // p >= q
    if (p < q)
    {
        int tmp = p;
        p = q;
        q = tmp;
    }

    int maxDiv = maxDivisor(p, q);
    printf("最大公约数是%d\n", maxDiv);
    printf("最小公倍数是%d\n", p * q / maxDiv);
    return 0;
}
