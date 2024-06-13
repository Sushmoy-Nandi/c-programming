#include<stdio.h>
#include<string.h>
int main()
{
int n;
scanf("%d",&n);
char a[10];
int sum=0;
for (int i = 0; i < n; i++)
{
scanf("%s",a);
}
for (int i = 0; i < strlen(a); i++)
{
sum=sum+a[i]-'0';
}
printf("%d",sum);
return 0;
}