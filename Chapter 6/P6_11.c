#include <stdio.h>
int main(void)
{
    int ft_marks[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 49, 92, 56, 53, 48, 47, 49, 42, 90, 43, 83, 47, 43, 45, 56, 55, 42, 42, 58, 59, 67, 53, 56, 71, 62},
        st_marks[40] = {97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 49, 92, 56, 53, 48, 47, 49, 42, 90, 43, 83, 47, 43, 45, 56, 55, 42, 42, 56, 49, 41, 86, 54, 40, 49, 92},
        final_masks[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 47, 90, 59, 63, 86, 40, 49, 92, 56, 53, 48, 47, 49, 42, 90, 43, 42, 90, 43, 83, 47, 45, 56, 55, 42, 42, 43, 59, 67, 53, 62};
    // printf("length : %d\n", sizeof(final_masks));
    int i;
    double total_marks[40];
    for (i = 0; i < 40; i++)
    {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_masks[i] / 2.0;
    }
    for (i = 1; i <= 40; i++)
    {
        printf("Roll No: %d\total_marks: %0.0lf\n", i, total_marks[i - 1]);
    }
    return 0;
}