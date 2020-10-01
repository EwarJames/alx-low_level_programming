#include "holberton.h"

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int k;

for (k = 0; k < n && src[k] != '\0'; k++)
dest[k] = src[k];

for (; n > k; k++)
dest[k] = '\0';

return (dest);
}
