#include <stdio.h>
int main(void)
{
    int i, n = 6;
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d =%d\n", n, i, n * i);
    }
}