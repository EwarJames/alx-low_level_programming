#include "holberton.h"

/**
 *puts_half - prints every half of a character
 *@str: holds characters to be printed
 */
void puts_half(char *str)
{
int index;
int len;

index = 0;
len = 0;
while (str[index++])
len++;
for (index = 0; index < len; index /= 2)
_putchar(str[index]);

_putchar('\n');

}
