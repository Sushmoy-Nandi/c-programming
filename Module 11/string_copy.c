#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    // printf("%s %s",a,b);
    // for(int i=0;i<=strlen(b);i++)
    // {
    //     // printf("%d ",i);
    //     a[i]=b[i];     //b ar potita char a ta copy hoba
    // }
    strcpy(a,b); //buit in funtion ar kaj holo b ar potita char a ta copy hoba without using loop
    printf("%s %s",a,b);
    
    return 0;
}