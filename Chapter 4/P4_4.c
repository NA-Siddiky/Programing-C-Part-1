#include <stdio.h>
int main(void)
{
    int n = 1;
    while (n <= 100)
    {
        printf("%d\n", n);
        n++;
        if (n > 10)
        {
            break;
        }
    }
}