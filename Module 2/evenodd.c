#include<stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    // True if the remainder is 0
    if  (number%2==0) {
        printf("This is an even integer.");
    }
    else {
        printf(" This is an odd integer.");
    }

    return 0;
}