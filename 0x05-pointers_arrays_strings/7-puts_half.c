#include "holberton.h"

/**
 *puts_half - prints every half of a character
 *@str: holds characters to be printed
 */
void puts_half(char *str)
{
int index;
int len;
int n;

index = 0;
len = 0;
while (str[index++])
len++;
if ((len % 2) == 0)
n = len / 2;
else
n = (len + 1) / 2;
for (index = n; index < len; index++)
_putchar(str[index]);

_putchar('\n');

}
