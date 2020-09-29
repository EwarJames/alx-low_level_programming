#include "holberton.h"

/**
 *print_rev - Prints strings in reverse order
 *@s: variable containing the address for the string
 *Return: no return
 */
void print_rev(char *s)
{

int k;

for (k = 0; s[k] != '\0'; k++)

;

for (k--; k >= 0; k--)

_putchar(s[k]);

_putchar('\n');

}
