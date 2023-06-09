#include <unistd.h>
// #include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, returns the character written as an unsigned char cast to an int.
 * On error, returns -1.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }

    _putchar(*s);
    _puts_recursion(s + 1);
}

int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}