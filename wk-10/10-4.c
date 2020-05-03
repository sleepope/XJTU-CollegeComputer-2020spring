/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-04-20
 *
 * ALL COPYRIGHTS RESERVED
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdio.h>
#include <string.h>

#define maxn 50

int main()
{
    char max[maxn] = {0};
    char min[maxn] = {127};
    char tmp[maxn];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", tmp);
        if (strcmp(tmp, max) > 0)
        {
            strcpy(max, tmp);
        }
        if (strcmp(tmp, min) < 0)
        {
            strcpy(min, tmp);
        }
    }
    printf("max:%s\nmin:%s\n", max, min);

    return 0;
}
