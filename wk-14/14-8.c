/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-18
 *
 * MIT LICENCE
 */

#define _AUTHOR_IS_SCIZEAL

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxn 100

// judge if a number is prime number
bool isPrime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

// return reversed number in decimal
int reversedPrime(char *num, int radix)
{
    int reversedNum = 0, len = strlen(num);
    for (int i = 0; i < len; i++)
    {
        reversedNum += (num[i] - '0') * pow(radix, i);
    }
    return reversedNum;
}

int main()
{
    int prime, radix;
    char num[maxn];

    while (scanf("%d", &prime) == 1 && prime > 1)
    {
        scanf("%d", &radix);
        if (isPrime(prime))
        {
            itoa(prime, num, radix);
            if (isPrime(reversedPrime(num, radix)))
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
