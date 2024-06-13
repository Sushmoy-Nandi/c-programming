#include <stdio.h>

int count_before_zero(int arr[], int size) 
{
    int count = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == 0) 
        {
            break;
        }
        count++;
    }
    return count;
}

int main() 
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = count_before_zero(arr, size);
    printf("%d\n", count);
    return 0;
}
