#include <stdio.h>
int main(void)
{
    int m, n = 5;
    int i;

    m = 0;

    for (i = 1; i <= 10; i++)
    {
        m = m + n;
        printf("%d X %d = %d\n", n, i, m);
    }
    // test from win 10 v.2
}