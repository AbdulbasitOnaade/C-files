#include <stdio.h>
#include <string.h>

// void greetings(char name[], double time)
// {
//     printf("\nHELLO Everyone!\n");
//     printf("\nMy name is %s!", name);
//     printf("\nI arrived at exactly %.2lf am", time);
// }

// int main()
// {
//     char name[] = "Abdulbasit";
//     double time = 12.00;

//     greetings(name, time);
// }
// int findMax(int x, int y)
// {
//     // if (x > y)
//     // {
//     //     return x;
//     // }
//     // else
//     // {
//     //     return y;
//     // }
//     return(x > y) ? x : y;
// }
int main()
{
    // int max = findMax(20, 23);
    // printf("%d\n", max);

    char string1[] = "Abdulbasit";
    char string2[] = "Onaade";
    // strlwr(string2);
    // strupr(string2);
    strcat(string1, string2);
    printf("\n%s", string1, string2);
    return 0;
}
