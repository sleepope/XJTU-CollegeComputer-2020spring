/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-04-20
 *
 * MIT LICENCE
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdio.h>

// calculate ack(m, n)
int ack(int m, int n)
{
    // ack(0, n) = n + 1
    if (m == 0)
    {
        return n + 1;
    }

    // ack(m, 0) = ack(m - 1, 1)
    if (n == 0)
    {
        return ack(m - 1, 1);
    }

    // ack(m, n) = ack(m - 1, ack(m, n - 1))
    return ack(m - 1, ack(m, n - 1));
}

int main()
{
    int m, n;
    scanf("%d,%d", &m, &n);
    printf("%d\n", ack(m, n));

    return 0;
}
