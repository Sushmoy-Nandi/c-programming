#include <stdio.h>
#include <string.h>

int main() 
{
    char s[1001];
    int i, small_count = 0, capital_count = 0, space_count = 0;

    fgets(s, sizeof(s), stdin);

    for (i = 0; i < strlen(s); i++) 
    {
        if (s[i] >= 'a' && s[i] <= 'z') 
        {
            small_count++;
        } 
        else if (s[i] >= 'A' && s[i] <= 'Z') 
        {
            capital_count++;
        } 
        else if (s[i] == ' ') 
        {
            space_count++;
        }
    }
    printf("Capital - %d\n", capital_count);
    printf("Small - %d\n", small_count);
    printf("Spaces - %d\n", space_count);

    return 0;
}
