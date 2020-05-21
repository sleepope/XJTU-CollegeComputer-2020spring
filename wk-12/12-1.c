/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-04
 *
 * MIT LICENCE
 */

#define __AUTHOR__IS__SCIZEAL__

#include <stdbool.h>
#include <stdio.h>

#define maxn 100

// typedef struct STUDENT_DATA Data
// (int) student_number
// (char) student_name[maxn]
// (int) student_grade
typedef struct STUDENT_DATA
{
    int student_number;
    char student_name[maxn];
    int student_grade;
} Data;

Data grade_list[maxn];

// swap the value of 2 Data(s)
void swap_Data(int i, int j)
{
    Data tmp = grade_list[i];
    grade_list[i] = grade_list[j];
    grade_list[j] = tmp;
}

int main()
{
    int student_total_number;
    scanf("%d", &student_total_number);
    for (int i = 0; i < student_total_number; i++)
    {
        scanf("%d", &grade_list[i].student_number);
        scanf("%s", grade_list[i].student_name);
        scanf("%d", &grade_list[i].student_grade);
    }

    // Bubble Sort
    for (int i = 0; i < student_total_number - 1; i++)
    {
        bool is_sorted = true;
        for (int j = 0; j < student_total_number - i - 1; j++)
        {
            if (grade_list[j].student_grade < grade_list[j + 1].student_grade)
            {
                swap_Data(j, j + 1);
                is_sorted = false;
            }
        }
        if (is_sorted)
        {
            break;
        }
    }

    for (int i = 0; i < student_total_number; i++)
    {
        printf("%d ", grade_list[i].student_number);
        printf("%s ", grade_list[i].student_name);
        printf("%d\n", grade_list[i].student_grade);
    }

    return 0;
}
