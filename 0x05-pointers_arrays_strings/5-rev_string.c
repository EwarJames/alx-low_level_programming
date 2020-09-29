#include "holberton.h"

/**
 *rev_string - reverses a string
 *@s: char array string type
 *Return: no retrun
 */
void rev_string(char *s)
{
int k, c, l;
char j;

for (k = 0; s[k] != '\0'; k++)
;
l = k;

for (k--, c = 0; c > l / 2; k--, c++)
{
j = s[c];
s[c] = s[k];
s[k] = j;
}
}
