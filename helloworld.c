#include <stdio.h>

int main()
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
    else if (age <= 0)
    {
        printf("You are not yet born!");
    }
    else
    {
        printf("You are too young to sign up!");
    }

    return 0;
}