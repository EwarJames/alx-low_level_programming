#include "holberton.h"

/**
 *binary_to_uint - Converts a binary number to an unsigned int.
 *@b: Pointer to a string of 0 and 1 chars.
 *
 *Return: Converted number
 *        0 - if there is one or more chars in the string b
 *             that is not 0 or 1 OR b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int convNum = 0, weight = 1;
int length = 0;

if (b == '\0')
return (0);

while (b[length])
length++;

for (length -= 1; length >= 0; length--)
{
if (b[length] != '0' && b[length] != '1')
return (0);

convNum += (b[length] - '0') * weight;
weight *= 2;
}

return (convNum);
}
