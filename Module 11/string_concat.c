#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",a,b);

    // b total ta copy

    int k=strlen(a);
    for(int i=0;i<=strlen(b);i++)
    {
        // printf("%d ",i);
        a[k]=b[i];
        k++;
    }

    // strcat(a,b); //string function to copy without loop use

    // b ar kisu part copy
    
    // int k=strlen(a);
    // for(int i=0;i<=2;i++)
    // {
    //     // printf("%d ",i);
    //     a[k]=b[i];
    //     k++;
    // }
    // a[k]='\0';


    printf("%s %s",a,b);

    return 0;
}