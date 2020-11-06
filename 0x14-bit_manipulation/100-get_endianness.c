#include "holberton.h"

/**
 *get_endianness - Checks the endianness.
 *
 *Return: 0 - If big endian.
 *        1 - If little endian.
 */
int get_endianness(void)
{
int dig;
char *endian;

dig = 1;
endian = (char *)&dig;

if (*endian == 1)
return (1);

return (0);
}
