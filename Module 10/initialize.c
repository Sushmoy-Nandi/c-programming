#include<stdio.h>
int main()
{
    // char a[6]={'R','a','h','a','t'}; //no gurantee
    char a[5]="Rahat"; //gurantee
    // for(int i=0;i<5;i++)
    // {
    //     printf("%c\n",a[i]);
    // }
    // int sz=sizeof(a)/sizeof(char);
    // printf("%d\n",sz);
    printf("%s",a);
    return 0;
}