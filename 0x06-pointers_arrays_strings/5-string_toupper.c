#include "holberton.h"

/**
 *string_toupper - Changes all lowercase letters to uppercase
 * @c: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *c)
{
int k;

for (k = 0; c[k] != '\0'; k++)
{
if (c[k] > 96 && c[k] < 123)
{
c[k] -= 32;
}
}
return (c);
}
