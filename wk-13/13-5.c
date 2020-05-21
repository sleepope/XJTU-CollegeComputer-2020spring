/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-11
 *
 * MIT LICENCE
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdio.h>

#define maxn 100

int main()
{
    int length, displace, arr[maxn];
    scanf("%d%d", &length, &displace);
    displace %= length;

    for (int i = 0; i < length; i++)
    {
        scanf("%d", arr + i);
        // duplicate the array
        arr[length + i] = arr[i];
    }

    for (int i = length - displace; i < 2 * length - displace - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[2 * length - displace - 1]);

    return 0;
}
