// #define LOCAL
#include <ctype.h>   //
#include <iso646.h>  // 非美式键盘（提供关键字 and or not）
#include <math.h>    // 数学函数
#include <stdbool.h> // bool 类型
#include <stdio.h>   // 标准输入输出
#include <stdlib.h>  //
#include <string.h>  // 字符串函数
#include <time.h>    // 时间函数
#include <windows.h> //
#define maxn 100
#define infty 1000

int main()
{
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
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
}
