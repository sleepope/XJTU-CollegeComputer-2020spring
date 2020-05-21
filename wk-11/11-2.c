/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-04-27
 *
 * MIT LICENCE
 */

#define __AUTHOR__IS__SCIZEAL__

#include <math.h>
#include <stdio.h>

int main()
{
    int bin;
    scanf("%d", &bin);
    int dec = 0, count = 0;
    while (bin)
    {
        dec += (bin % 10) * pow(2, count);
        bin /= 10;
        count++;
    }
    printf("%d\n", dec);

    return 0;
}
