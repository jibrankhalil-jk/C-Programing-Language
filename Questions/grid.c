#include <stdio.h>

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        printf("\n");
        printf("\n");
        for (int j = 0; j <= i; j++)
        {
            printf("*\t");
        }
    }

    return 0;
}