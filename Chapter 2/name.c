#include <stdio.h>
int main()
{
    char fname[20], lname[20];

    printf("Enter first name: ");
    scanf("%s", &fname);

    printf("Enter last name: ");
    scanf("%s", &lname);

    printf("Full name : %s %s", fname, lname);

    return 0;
}