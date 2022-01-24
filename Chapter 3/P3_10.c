#include <stdio.h>
int main()
{
    char ch;
    printf("Enter : ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lower case", ch);
    }
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upper case", ch);
    }
}