#include<stdio.h>
void sum(int x,int y)
{
    int s=x+y;
    printf("%d\n",s);
    return; // no value(icca hola dibi na hola dibi na)
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}