/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-04-27
 *
 * MIT LICENCE
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdio.h>

#define maxn 100
#define infty 1000

int main()
{
    int num;
    scanf("%d", &num);
    int arr[maxn], sum = 0;
    int max = -infty, min = infty;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
        sum += arr[i];
        max = (arr[i] > max) ? arr[i] : max;
        min = (arr[i] < min) ? arr[i] : min;
    }
    printf("%d\n%d\n%lf", max, min, sum * 1.0 / num);

    return 0;
}
