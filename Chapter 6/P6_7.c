#include <stdio.h>
int main(void)
{
    int ara[5] = {1, 2, 3, 4, 5};

    printf("%d\n", ara[-1]);
    printf("%d\n", ara[4]);
    printf("%d\n", ara[100]);

    return 0;
}