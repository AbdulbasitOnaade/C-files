#include <stdio.h>

int main()
{
    int num = 0;
    int sum = 0;
    do
    {
        printf("Enter a number above 1: ");
        scanf("%d", &num);
        if (num > 1)
        {
            sum += num;
        }

    } while (num > 1);
    printf("The sum is %d\n", sum);
}

int main()
{
    int n;
}