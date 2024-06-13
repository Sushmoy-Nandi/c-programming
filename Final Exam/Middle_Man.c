#include <stdio.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int ages[], int N) 
{
    for (int i = 0; i < N - 1; i++) 
    {
        for (int j = 0; j < N - i - 1; j++) 
        {
            if (ages[j] > ages[j + 1]) 
            {
                swap(&ages[j], &ages[j + 1]);
            }
        }
    }
}

void findMiddleAges(int ages[], int N) 
{
    bubbleSort(ages, N);

    if (N % 2 == 1) 
    {
        int middle = (N + 1) / 2;
        printf("%d\n", ages[middle - 1]);
    } else 
    {
        int middle1 = N / 2;
        int middle2 = middle1 + 1;
        printf("%d %d\n", ages[middle1 - 1], ages[middle2 - 1]);
    }
}

int main() 
{
    int N;
    
    scanf("%d", &N);

    int ages[N];
   
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &ages[i]);
    }

    findMiddleAges(ages, N);

    return 0;
}
