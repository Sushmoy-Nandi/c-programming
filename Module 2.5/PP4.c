#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a,&b);
    if(a>b)
    {
        printf("positive");
    }
    else if(a<b)
    {
        printf("negative");
    }
    else
    {
        printf("zero");
    }

}