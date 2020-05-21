/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-18
 *
 * MIT LICENCE
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdbool.h>
#include <stdio.h>

int mon[2][12] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

bool isLeapYear(int year)
{
    return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}

int main()
{
    int year, month;
    scanf("%d,%d", &year, &month);
    printf("%d\n", mon[isLeapYear(year)][month - 1]);
    return 0;
}
