# Differences Between `->` and `.`

## [General Usage](https://www.zhihu.com/question/49164544/answer/479672601)

>   `s` means structure, `p` means pointer of structure.

-   `s.member` equals to `(&s)->member`
-   `p->member` equals to `(*p).member`



## [Subtle Differences](https://www.zhihu.com/question/49164544/answer/301969545)

-   `a.b` **might be lvalue or non-lvalue** (determined by `a`)

-   `a->b` **must be lvalue**.

>   What is *lvalue*?
>   -   [Definition in Wikipedia](https://en.wikipedia.org/wiki/Value_(computer_science)#lrvalue)
>   -   [Discussion in Stack Overflow](https://stackoverflow.com/questions/6397745/what-is-an-lvalue)

```c
#include <stdio.h>

typedef struct langtest
{
    char c;
} L;

L a = {'a'};

L f()
{
    L a = {'f'};
    return a;
}

L *g()
{
    static L a = {'g'};
    return &a;
}

int main()
{
    // a is lvalue, a.b is lvalue
    printf("%c\n", a.c = 'A');

    // f() returns a non-lvalue, f().b is non-lvalue, compile error
    // printf("%c\n", f().c = 'F');

    // g()->c is always lvalue
    printf("%c\n", g()->c = 'G');

    return 0;
}
```


