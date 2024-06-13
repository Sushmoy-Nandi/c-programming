#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],max=INT_MIN,min=INT_MAX,minindex,maxindex;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]<min)
        {
            min=ar[i];
            minindex=i;
        }

        if(ar[i]>max)
        {
            max=ar[i];
            maxindex=i;
        }
    }
    // printf("%d %d",min,max);
    ar[maxindex]=min;
    ar[minindex]=max;
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}