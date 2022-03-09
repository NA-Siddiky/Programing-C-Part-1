#include <stdio.h>
int main(void)
{
    int marks, i, count;
    int total_marks[] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 49, 92, 56, 53, 48, 47, 49, 42, 90, 43, 83, 47, 43, 45, 56, 55, 42, 42, 58, 59, 67, 53, 56, 71, 99, 99};

    // printf("length : %d\n", sizeof(total_marks));
    for (marks = 50; marks <= 100; marks++)
    {
        count = 0;
        for (i = 0; i < 40; i++)
        {
            if (total_marks[i] == marks)
            {
                count++;
            }
        }
        printf("Marks: %d Count: %d\n", marks, count);
    }
    return 0;
}