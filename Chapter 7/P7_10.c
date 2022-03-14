#include <stdio.h>
#include <math.h>

const float pi = 3.1416;
float a, r;

float my_fnc(float r)
{
    a = pi * pow(r, 2);
    return a;
}

int main()
{
    scanf("%f", &r);

    float area = my_fnc(r);
    printf("%0.2f\n", a);
    return 0;
}

// a= pai*r2