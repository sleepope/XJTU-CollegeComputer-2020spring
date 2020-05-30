/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-04-27
 *
 * MIT LICENCE
 */

#define _AUTHOR_IS_SCIZEAL

#include <stdio.h>

#define infty 1000

int main()
{
    int tmp, sum = 0;
    int max = -infty, min = infty;

    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &tmp);
        sum += tmp;
        max = (tmp > max) ? tmp : max;
        min = (tmp < min) ? tmp : min;
    }
    printf("%d\n%d\n%lf", max, min, sum * 1.0 / num);

    return 0;
}
