#include <stdio.h>
int main(void)
{
    int n, i;
    for (n = 1; n <= 20; n++)
    {
        printf("Multiplecation of : %d\n", n);
        for (i = 1; i <= 10; i++)
        {
            printf("%d X %d = %d\n", n, i, n * i);
        }
    }
}