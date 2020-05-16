# Problems in Week 13

>   05.11 - 05.17

[TOC]

## 1. 字符线性表

**题目描述：**

创建一个字符线性表（顺序表），并实现其基本操作（如插入，查找，删除，输出等）。应用该线性表，将键盘输入的一行字符插入表中，然后输出表中所有字符及表长；再输入一个字符，从表中删除该字符（重复出现应进行多次删除），最后再次输出表中所有字符及表长。

**输入格式：** 见样例

**输出格式：** 见样例

---

**样例输入 1：**

```in
A BCBBDEF 12XYZB A
B
```

**样例输出 1：**

```out
A BCBBDEF 12XYZB A
18
A CDEF 12XYZ A
14
```

---



## 2. 逆序函数

**题目描述：**

编写函数,函数原型如下:

`void fun(int n,char res[]);`

函数功能是将整数n的各位数字逆序排列，存放到res字符数组中。

**输入格式：** 见样例

**输出格式：** 见样例

---

**样例输入 1：**

```in
9680200
```

**样例输出 1：**

```out
0020869
```

---

**样例输入 2：**

```in
123456
```

**样例输出 2：**

```out
654321
```

---

**样例输入 3：**

```in
1035
```

**样例输出 3：**

```out
5301
```

---



## 3. 新兵队列训练*

**题目描述：**

某部队进行新兵队列训练，将新兵从1开始按顺序依次编号，并排成一行横队，训练的规则如下：从头开始1至2报数，凡报到2的出列，剩下的向小序号方向靠拢，再从头开始进行1至3报数，凡报到3的出列，剩下的向小序号方向靠拢，继续从头开始进行1至2报数，以后从头开始轮流进行1至2报数、1至3报数直到剩下的人数不超过三人为止。编写程序，输入数N为最开始的新兵人数（20 < N < 6000），输出剩下的新兵最初的编号。

**输入格式：** 见样例

**输出格式：** 见样例

---

**样例输入 1：**

```in
21
```

**样例输出 1：**

```out
1 7 19
```

---



## 4. 反转字符串

**题目描述：**

编写字符串反转函数 `void mystrrev(char string[])`，该函数的功能为将指定字符串中的字符顺序颠倒排列，然后再编写主函数调用该反转函数验证之。

**输入格式：** 任意一个字符串，可能含有空格

**输出格式：** 逆序后的字符串

---

**样例输入 1：**

```in
Hello,everyone
```

**样例输出 1：**

```out
enoyreve,olleH
```

---

**样例输入 2：**

```in
123 456 7890
```

**样例输出 2：**

```out
0987 654 321
```

---



## 5. 右移

**题目描述：**

一个数组A中存有n（n>0）个整数，在不允许使用另外数组的前提下，将每个整数循环向右移m（m>=0）个位置，即将A中的数据由（A0 A1……An-1）变换为（An-m …… An-1 A0 A1……An-m-1）（最后m个数循环移至最前面的m个数）。输入n ( 1<=n<=100)、m（m>=0）及n个整数，输出循环右移m位以后的整数序列。

**输入格式：** 第一行依次输入数组元素的个数和移动的位数 第二行输入数组

**输出格式：** 移位后的数组

---

**样例输入 1：**

```in
6 2
1 2 3 4 5 6
```

**样例输出 1：**

```out
5 6 1 2 3 4
```

---

**样例输入 2：**

```in
3 4
1 2 3
```

**样例输出 2：**

```out
3 1 2
```

---



## 6. 字符串查询

**题目描述：**

编写字符查找函数，函数原形为：

`int mystrchr(char string[],char c);`

功能是在字符串string中查找c中的字符，如果找到则返回该字符的索引值（即下标，否则返回-1）。

编写主函数进行测试。输入一个字符串数据（长度<80)和一个字符，输出该字符的序号（从0开始）。

**输入格式：** 见样例

**输出格式：** 见样例

---

**样例输入 1：**

```in
asdffg &  *123 hjkl
f
```

**样例输出 1：**

```out
3
```

---

**样例输入 2：**

```in
Xx Yy Zz Ax
W
```

**样例输出 2：**

```out
-1
```

---



## 7. Helloworld for U

**题目描述：**

Given any string of N (>=5) characters, you are asked to form the characters into the shape of U. For example, `helloworld!` can be printed as:

```
h   !
e   d
l   l
lowor
```

That is, the characters must be printed in the original order, starting top-down from the left vertical line with n1characters, then left to right along the bottom line with n2 characters, and finally bottom-up along the vertical line with n3 characters. And more, we would like U to be as squared as possible -- that is, it must be satisfied that n1 = n3 = max { k| k <= n2 for all 3 <= n2 <= N } with n1 + n2 + n3 - 2 = N.

Input Specification: Each input file contains one test case. Each case contains one string with no less than 5 and no more than 80 characters in a line. The string contains no white space. Output Specification: For each test case, print the input string in the shape of U as specified in the description.

**输入格式：** 见样例

**输出格式：** 见样例

---

**样例输入 1：**

```in
helloworld!
```

**样例输出 1：**

```out
h   !
e   d
l   l
lowor
```

---

**样例输入 2：**

```in
NextNumber:2
```

**样例输出 2：**

```out
N    2
e    :
x    r
tNumbe
```

---

