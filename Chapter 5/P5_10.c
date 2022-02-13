#include <stdio.h>
int gcd_find(int a, int b)
{
    int t;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main()
{
    int t, a, b, lcm;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        lcm = gcd_find(a, b);
        printf("LCM = %d\n", (a * b) / lcm);
    }
    return 0;
}
