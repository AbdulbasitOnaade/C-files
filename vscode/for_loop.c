#include <stdio.h>
#include <string.h>

// int main()
// {
//     // for (int i = 1; i <= 10; i++)
//     // {
//     //     printf("test\n");
//     //     printf("\n%d", i);
//     // }

//     // char name[25];

//     // printf("\nEnter your name: ");
//     // fgets(name, 25, stdin);
//     // name[strlen(name) - 1] = '\0';

//     // while (strlen(name) == 0)
//     // {
//     //     printf("\nYou must enter a name.");
//     //     printf("\nEnter your name:");
//     //     fgets(name, sizeof(name), stdin);

//     // }
//     // printf("\nHello %s", name);
//     // return 0;
//     int number = 1;
//     int sum = 0;
// do{
//     printf("\nEnter a number above 1: ");
//     scanf("%d", &number);
//     if(number > 1)
//     {
//         sum += number;
//     }
// }while(number > 1);

// printf("The sum is %d\n", sum);

// }

int main()
{
    // int num = 2;

    // while (num <= 20)
    // {
    //     printf("%d\n", num);
    //     num += 2;
    // }
    // return 0;
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