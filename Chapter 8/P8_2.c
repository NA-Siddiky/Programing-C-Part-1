#include <stdio.h>

int b_search(int ara, int low, int high, int key)
{
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == mid)
        {
            break;
        }
        if (key < ara)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (low > high)
    {
        printf("%d is not in the array\n", key);
    }
    else
    {
        printf("%d is not fount in the array. It is the %d th element of array.\n", ara, mid);
    }
    return;
}

int main()
{
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low_index = 0;
    int high_index = 15;
    // int mid_index;
    // int num = 97;
    int num;
    scanf("%i", &num);

    b_search(ara[15], low_index, high_index, num);
}