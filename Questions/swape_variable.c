// swap variable values usig gloabl variables
#include <stdio.h>

int a, b;

void swap_values(void)
{
    printf("after swaping\n");
    a += b; // 1 + 2 = 3    a=a+b;  a++ a+=1; a= a+1;
    b = a - b; // 3 - 2 = 1
    a -= b; // 3 - 1 = 2
}

int main()
{
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("a is %d , b is %d\n", a,b);
    swap_values();
    printf("a is %d , b is %d\n", a, b);
    return 0;
}

/*
output
Enter first number : 1
Enter second number : 2
a is 1 , b is 2
after swaping
a is 2 , b is 1
*/