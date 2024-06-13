#include <stdio.h>

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);
    int Matrix_Again[n][m];
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &Matrix_Again[i][j]);
        }
    }
    
    // Print the last row
    for (int j = 0; j < m; j++) 
    {
        printf("%d ", Matrix_Again[n-1][j]);
    }
    printf("\n");
    
    // Print the last column
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", Matrix_Again[i][m-1]);
    }
    
    return 0;
}
