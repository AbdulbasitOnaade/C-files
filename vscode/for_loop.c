#include <stdio.h>
#include <string.h>

int main()
{
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("test\n");
    //     printf("\n%d", i);
    // }

    // char name[25];

    // printf("\nEnter your name: ");
    // fgets(name, 25, stdin);
    // name[strlen(name) - 1] = '\0';

    // while (strlen(name) == 0)
    // {
    //     printf("\nYou must enter a name.");
    //     printf("\nEnter your name:");
    //     fgets(name, sizeof(name), stdin);
         
    // }
    // printf("\nHello %s", name);
    // return 0;
    int number = 1;
    int sum = 0;
do{
    printf("\nEnter a number above 1: ");
    scanf("%d", &number);
    if(number > 1)
    {
        sum += number;
    }
}while()
}