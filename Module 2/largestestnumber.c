#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two number:  \n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        printf("This is largest Number %d",num1);
    }
    else
    {
        printf("This is largest Number %d",num2);
        
    }

    return 0;
}


