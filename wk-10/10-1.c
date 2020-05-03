/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-04-20
 *
 * ALL COPYRIGHTS RESERVED
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdio.h>

// return the reversed number
int rev(int Initial_Number)
{
    int Reversed_Number = 0;
    while (Initial_Number)
    {
        Reversed_Number = 10 * Reversed_Number + Initial_Number % 10;
        Initial_Number /= 10;
    }
    return Reversed_Number;
}

int main()
{
    int Wrong_Integer_1, Wrong_Integer_2;
    scanf("%d%d", &Wrong_Integer_1, &Wrong_Integer_2);
    int Right_Integer_1 = rev((Wrong_Integer_1 + Wrong_Integer_2) / 2);
    int Right_Integer_2 = rev((Wrong_Integer_1 - Wrong_Integer_2) / 2);
    printf("%d %d\n", Right_Integer_1 + Right_Integer_2, Right_Integer_1 - Right_Integer_2);

    return 0;
}
