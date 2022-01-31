#include <stdio.h>
int main(void)
{
    int m, n, i;

    for (n = 1; n <= 10; n++)
    {
        m = 0;
        printf("Multiplecation of : %d\n", n);
        for (i = 1; i <= 10; i++)
        {
            m = m + n;
            printf("%d X %d = %d\n", n, i, m);
        }
    }
}