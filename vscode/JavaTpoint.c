#include <stdio.h>
// int main()
// {
// char ch;
// printf("Enter a character: ");
// scanf("%c", &ch);
// printf("\nThe ascii value of the ch variable is: %d", ch);
// return 0;
// int k;
// for(k=0; k<=255; k++)
// {
//     printf("\nThe ascii code for %c is %d", k,k);
// }

// return 0;
//     int sum = 0;
//     char name[20];
//     int i = 0;
//     printf("Enter name: ");
//     scanf("%s", name);

//     while (name[i] != '\0')
//     {
//         printf("\nThe ascii value of the character %c is %d", name[i], name[i]);
//         sum = sum + name[i];
//         i++;
//     }
//     printf("\nSum of the ascii value of a string is: %d", sum);
//     return 0;
// }
// void birthday()
// {
//     printf("\nHappy birthday to you!");
//     printf("\nHappy birthday to you!");
//     printf("\nHappy birthday to you... my dear!");
//     printf("\nHappy birthday to you!\n");
// }
// int main()
// {
//     birthday();
//     birthday();
//     birthday();

//     return (0);
// }

void birthday(char x[], int y)
{
    printf("\nHappy birthday to you dear %s !", x);
    printf("\nYou are  years %d old!", y);
}
int main()
{
    char name[] = "Dhamy";
    int age = 23;
    birthday(name, age);

    return (0);
}