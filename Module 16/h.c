#include <stdio.h>


void check_Divisible(int num)
{
    if (num % 10 == 0)
    {
        printf("%d is divisible by 10.\n", num);
    }
    if (num % 9 == 0)
    {
        printf("%d is divisible by 9.\n", num);
    }
    if (num % 10 != 0 && num % 9 != 0)
    {
        printf("%d is not divisible by 10 or 9.\n", num);
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    check_Divisible(num);
    return 0;
}

