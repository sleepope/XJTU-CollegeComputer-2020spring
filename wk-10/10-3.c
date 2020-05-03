/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-04-20
 *
 * ALL COPYRIGHTS RESERVED
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdio.h>

/*
 * typedef Fraction Frac;
 * (int) Frac.numerator
 * (int) Frac.denominator
 */
typedef struct Fraction
{
    int numerator;
    int denominator;
} Frac;

// return <num>th fraction with given recursion
Frac frac(int num)
{
    Frac subsequence;
    if (num == 1)
    {
        subsequence.numerator = 2;
        subsequence.denominator = 1;
        return subsequence;
    }
    subsequence.numerator = frac(num - 1).numerator + frac(num - 1).denominator;
    subsequence.denominator = frac(num - 1).numerator;
    return subsequence;
}

// return summation of previous <num> fractions
double sum(int num)
{
    double summation = 0;
    for (int i = 1; i <= num; i++)
    {
        summation += 1.0 * frac(i).numerator / frac(i).denominator;
    }
    return summation;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.4lf\n", sum(n));

    return 0;
}
