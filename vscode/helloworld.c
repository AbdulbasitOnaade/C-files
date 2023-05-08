#include <stdio.h>
#include "limits.h"

/*int main()
{
    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are now signed up!");
    }
    else if (age < 18)
    {
        printf("You are too young to sign up!");
    }
    else
    {
        printf("You are not yet born!");
    }

    return 0;
}*/

int main()
{
    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);

    switch (age)
    {
    case 0:
        printf("You've just been born.\n");
        break;
    case 1 ... 17:
        printf("You're too young to sign up.\n");
        break;
    case 18 ... INT_MAX:
        printf("You've signed up successfully.\n");
        break;

    default:
        printf("Enter a valid age number");
    }
}

// int main(){
//     int num1 = 12 % 4;
//     int num2 = 180/8;
//     printf("\n%d", num1);
//     printf("\n%d", num2);
//     return 0;
// }
/*int main()
{
int x;
int y;
int result;
printf("\nEnter num1:");
scanf("%d", &x);

printf("\nEnter num2:");
scanf("%d", &y);
result = x + y;
printf("\nSum of 2 numbers: %d", result);

return 0;
}*/