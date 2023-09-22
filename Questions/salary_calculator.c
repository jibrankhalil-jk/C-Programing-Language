#include <stdio.h>

int main()
{
    int bs, hra, da;
    long int gs;

    printf("Enter your sallary : ");
    scanf("%d", bs);

    if (bs <= 10000)
    {
        // da = 80 hra = 20
        gs = bs + (bs * 0.2) + (bs * 0.8);
    }
    else if (bs <= 20000)
    {
        // da = 90 hra = 25
        gs = bs + (bs * 0.25) + (bs * 0.9);
    }
    else if (bs > 20000)
    {
        // da = 95  hra = 30
        gs= bs + (bs * 0.3) + (bs * 0.95);
    }else{
        gs = bs;
    }

    printf("Gross Salary is %ld",gs);

    return 0;
}