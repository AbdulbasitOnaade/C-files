#include <stdio.h>
int main()
{
    // char ch;
    // printf("Enter a character: ");
    // scanf("%c", &ch);
    // printf("\nThe ascii value of the ch variable is: %d", ch);
    // return 0;
    int k;
    for(k=0; k<=255; k++)
    {
        printf("\nThe ascii code for %c is %d", k,k);
    }

    return 0;
}