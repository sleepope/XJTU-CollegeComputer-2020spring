/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-04-20
 *
 * MIT LICENCE
 */

#define _AUTHOR_IS_SCIZEAL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxn 100

int main()
{
    int number_DEC, digit;
    char number_transformed_string[maxn];
    scanf("%d,%d", &number_DEC, &digit);
    int a;

    // if the function has existed, use it instead of write it!

    /*
     * `itoa()` is included by <stdlib.h>
     * `itoa` is abbreviation for `Int TO Array`
     *
     * analogously, there are functions like:
     * array -> float | double atof(const char *str)
     * array -> int   | int atoi(const char *str)
     */
    itoa(number_DEC, number_transformed_string, digit);

    // `strupr()` is used to rectify the lowercase letter in HEX
    printf("%s\n", strupr(number_transformed_string));

    return 0;
}
