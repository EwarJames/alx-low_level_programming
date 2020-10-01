#include "holberton.h"

/**
 *_strncat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *@n: The number of bytes from src to be appended to dest
 *Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
int k, j;

for (k = 0; dest[k] != '\0'; k++)
;

for (j = 0; src[j] != '\0' && n > 0; j++, n--, k++)
{
dest[k] = src[j];
}
return (dest);
}
