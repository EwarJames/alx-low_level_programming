#include "holberton.h"

/**
 *_strlen - Calculate the length of the string
 *@s: string identifier
 *Return: return the length of a string
 */

int _strlen(char *s)
{
int len;

len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
