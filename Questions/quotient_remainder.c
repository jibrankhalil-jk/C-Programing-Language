// quotient and remainder program using functions
#include <stdio.h>

float quotient(int a, int b)
{
    return a / b;
}
float reman(int a, int b)
{
    return a % b;
}

int main()
{
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Quotient is :%f", quotient(a, b));
    printf("\nRemainder is :%f", reman(a, b));
    return 0;
}


/*
output
Enter first number : 5 
Enter second number : 3
Quotient is :1
Remainder is :2
*/