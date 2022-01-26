#include <stdio.h>
int main(void)
{
    int n = 5;
    int i = 1;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i = i + 1;
    }
}