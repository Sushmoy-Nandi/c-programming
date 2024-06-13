#include<stdio.h>
int min()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a-b;
    return s;
}
int main()
{
    int s=min();
    printf("%d",s);
    return 0;
}