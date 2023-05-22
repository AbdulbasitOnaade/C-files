#include <stdio.h>

void greetings(char name[], double time)
{
    printf("\nHELLO Everyone!\n");
    printf("\nMy name is %s!", name);
    printf("\nI arrived at exactly %.2lf am", time);
}

int main()
{
    char name[] = "Abdulbasit";
    double time = 12.00;

    greetings(name, time);
}