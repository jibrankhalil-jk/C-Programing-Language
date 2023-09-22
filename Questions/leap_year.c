#include <stdio.h>

int leap(int a)
{
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
    {
        printf("the year is leap year");
    }
    else
    {
        printf("the year is year");
    }
}

int main()
{
    int a;
    printf("enter the value :");
    scanf("%d", &a);

    printf("the year is %d", leap(a));

    return 0;
}