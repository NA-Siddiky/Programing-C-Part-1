#include <stdio.h>
int find_max(int ara[], int n);
int main()
{
    int ara[] = {-100, 0, 53, 22, 53, 23, 56, -121, 201, 2, 85};
    int n = 11;
    int max = find_max(ara, n);
    printf("%d\n", max);
    return 0;
}
int find_max(int ara[], int n)
{
    int max = ara[0];
    int i;
    for (i = 1; i < n; i++)
    {
        if (ara[i] > max)
        {
            max = ara[i];
        }
    }
    return max;
}

// !..logic...
// {
//     int max = ara[0];
//     int i;
//     for (i = 1; i < n; i++)
//     {
//         if (ara[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     return max;
// }