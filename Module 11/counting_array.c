#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //int zero=0,one=0,two=0;
    int cnt[7]={0};
    for(int i=0;i<n;i++)
    {

        // if(a[i]==0)
        // {
        //     cnt[0]++;
        // }
        // if(a[i]==1)
        // {
        //     cnt[1]++;
        // }
        // if(a[i]==2)
        // {
        //     cnt[2]++;
        // }


        int val=a[i];
        cnt[val]++;


       // printf("%d ",a[i]);
    }
    // printf("0 - %d\n",cnt[0]);
    // printf("1 - %d\n",cnt[1]);
    // printf("2 - %d\n",cnt[2]);
    // printf("3 - %d\n",cnt[3]);
    // printf("4 - %d\n",cnt[4]);
    // printf("5 - %d\n",cnt[5]);
    // printf("6 - %d\n",cnt[6]);
    for(int i=0;i<=6;i++)
    {
        printf("%d - %d\n",i,cnt[i]);
    }

    return 0;
}