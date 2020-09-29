#include "holberton.h"

/**
* puts2 - Prints every two character of string
* @str:contains characters to be printed
*/

void puts2(char *str)
{
int index;
int len;
index = 0;
len = 0;

while (str[index++])
len++;

for (index = 0; index < len; index += 2)
_putchar(str[index]);

_putchar('\n');

}
