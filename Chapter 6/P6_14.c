#include <stdio.h>
int main()
{
    int i, j;
    int total_marks[] = {6, 7, 8, 9, 2, 3, 4, 7, 8, 4, 1};
    int marks_count[10];

    for (i = 0; i < 10; i++)
    {
        marks_count[i] = 0;
    }
    for (i = 0; i < 11; i++)
    {
        marks_count[total_marks[i]]++;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d %d   ", i, marks_count[i]);
    }
    return 0;
}