#include <stdio.h>
int main(void)
{
    int n, m, i, j;
    printf("%d n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d m: ");
        scanf("%d", &m);
        for (j = 10; j <= m; j++)
        {
            if (j % 11 == 0)
            {
                // printf("%d devisable: \n", j);
                continue;
            }

            printf("%d\n", j);
        }
    }
    return 0;
}