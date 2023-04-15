#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);


    if (ch >= 'a' && ch <= 'z') 
    {

        char nextChar = ch + 1;

       
        if (nextChar > 'z') {
            nextChar = 'a';
        }

        printf("%c\n", ch,nextChar);
    } else {
        printf("Invalid input! Please enter a lowercase alphabet character.\n");
    }

    return 0;
}
