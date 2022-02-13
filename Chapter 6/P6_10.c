#include <stdio.h>
int main(void)
{
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;
    for (i = 0, j = 9; i < 10; i++, j--)
    {
        temp = ara[j];
        ara[i] = ara[j];
        ara[i] = temp;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", ara[i]);
    }
    return 0;
}