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
    char string2[] = "abdulbasit";
    // strlwr(string2);
    // strupr(string2);
    // strcat(string1, string2);
    // strncat(string1, string2, 2);
    // strcpy(string1, string2);
    // strncpy(string1, string2, 3);

    // strset(string1, '$');
    // strnset(string1, '$', 3);
    // strrev(string1);

    // int result = strlen(string1);
    // int result2 = strcmp(string1, string2);
    // int result3 = strncmp(string1, string2, 1);
    strupr(string1);
    int result2 = stricmp(string1, string2);
    // int result3 = strnicmp(string1, string2, 1);
    printf("%s\n", string1);
    // printf("%d\n", result3);

    if (result2 == 0)
    {
        printf("\nThe string contains the same characters");
    }
    else
    {
        printf("\nThe string does not contains the same characters");
    }
    return 0;
}
