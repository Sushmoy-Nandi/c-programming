#include <stdio.h>
#include <string.h>

int main() 
{
    char a[1001];
    scanf("%s",a);

    int st = strlen(a);
    int ans= 1; 

    int i=0,j=st-1;
    for (int i = 0; i < st;i++,j--) 
    {
        if (a[i] != a[j])
        {
            ans=0;
            break;
        }

    }

    if(ans)
    {
        printf("YES");
    }
    else
    { 
        printf("NO");
    }

    return 0;
}
