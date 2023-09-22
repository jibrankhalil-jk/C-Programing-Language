#include <stdio.h>

int a, b, c, d, e, f, g, h, i, j;

int sum(void)
{
    return a + b + c + d + e + f + g + h + i + j;
}

float avg(void)
{
    return sum() / 10;
}

int main()
{
    printf("Enter Ten numbers :\n");
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

    printf("Sum is %d ",sum());
    printf("Avg is %.3f ",avg());

    return 0;
}