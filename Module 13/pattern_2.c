#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=(2*n)-1;
    k=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
    {
        printf(" ");
    }
    for(int j=1;j<=k;j++)
    {
        printf("*");
    }
    // line shes
    s++;
    k=k-2;
    printf("\n");
    }
    
    return 0;
}