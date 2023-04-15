#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int even=0,odd=0,pos=0,neg=0;
    for(int i=1;i<=n;i=i+1)
    {
        scanf("%d",&a);
        // kaj
        if (a%2==0)
        {
            even=even+1;
           
        }
        else
        {
            odd=odd+1;
        }
        
        if(a>0)
        {
           pos=pos+1;
        }
        else if(a<0)
        {
            neg=neg+1;
        }
        
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);

    return 0;
}