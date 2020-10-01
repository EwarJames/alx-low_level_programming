#include "holberton.h"

/**
 *_strcat - concatenate two strings
 *@dest: char string to concatenate to
 *@src: char string
 *Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
int k, j;

for (k = 0; dest[k] != '\0'; k++)
;

for (j = 0; src[j] != '\0'; j++)
{
dest[k] = src[j];
k++;
}

dest[k] = '\0';
return (dest);


}
