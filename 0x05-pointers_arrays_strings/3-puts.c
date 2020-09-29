#include "holberton.h"

/**
 *_puts - prints strings to the stdout
 *@str: char array of string type
 *Description: you can only use _putchar
 *return: no return
 */

void _puts(char *str)
{
int k;

for (k = 0; str[k] != '\0'; k++)
{
_putchar(str[k]);
}
_putchar('\n');
}
