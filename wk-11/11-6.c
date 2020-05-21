/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-04-27
 *
 * MIT LICENCE
 */

#define __AUTHOR__IS__SCIZEAL__

// This code is quite old thus worse optimized

#include <stdbool.h>
#include <stdio.h>
#define maxn 100

int main()
{
    // read data
    int n;
    scanf("%d", &n);
    int numerator[maxn], denominator[maxn];
    for (int i = 0; i < n; i++)
    {
        scanf("%d/%d", &numerator[i], &denominator[i]);
    }

    // denominator after add
    int DENOMINATOR_AFTER_ADD = 1;
    for (int i = 0; i < n; i++)
    {
        DENOMINATOR_AFTER_ADD *= denominator[i];
    }

    // numerator after add
    int NUMERATOR_AFTER_ADD = 0;
    for (int i = 0; i < n; i++)
    {
        NUMERATOR_AFTER_ADD += (numerator[i] * DENOMINATOR_AFTER_ADD / denominator[i]);
    }

    // is_negative
    bool is_negative = false;
    if (NUMERATOR_AFTER_ADD == 0)
    {
        printf("0\n");
        return 0;
    }
    else if (NUMERATOR_AFTER_ADD < 0)
    {
        is_negative = true;
    }

    // is_improper_fraction
    int INTEGER_PART = 0;
    if (NUMERATOR_AFTER_ADD % DENOMINATOR_AFTER_ADD == 0)
    {
        printf("%d\n", NUMERATOR_AFTER_ADD / DENOMINATOR_AFTER_ADD);
        return 0;
    }
    else if (NUMERATOR_AFTER_ADD >= DENOMINATOR_AFTER_ADD)
    {
        INTEGER_PART = NUMERATOR_AFTER_ADD / DENOMINATOR_AFTER_ADD;
        NUMERATOR_AFTER_ADD %= DENOMINATOR_AFTER_ADD;
    }

    // reduction
    for (int i = NUMERATOR_AFTER_ADD; i >= 2; i--)
    {
        if (NUMERATOR_AFTER_ADD % i == 0 && DENOMINATOR_AFTER_ADD % i == 0)
        {
            NUMERATOR_AFTER_ADD /= i;
            DENOMINATOR_AFTER_ADD /= i;
            break;
        }
    }

    // output
    if (is_negative)
    {
        printf("-");
    }
    if (INTEGER_PART)
    {
        printf("%d ", INTEGER_PART);
    }
    printf("%d/%d\n", NUMERATOR_AFTER_ADD, DENOMINATOR_AFTER_ADD);

    return 0;
}
