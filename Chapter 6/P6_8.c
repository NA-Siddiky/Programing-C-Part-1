#include <stdio.h>
int main(void)
{
    int ara[10] = {0, 1, 2, 3, 4, 5, 6, 8, 9};
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%dth element is: %d\n", i + 1, ara[i]);
    }
    return 0;
}