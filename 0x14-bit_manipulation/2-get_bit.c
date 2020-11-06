#include "holberton.h"

/**
 *get_bit - Gets the value of a bit at a given index.
 *@n: The bit to be found.
 *@index: Index to get a value at, starts from 0 of the
 *        bit you want to get.
 *Return: the value of the bit at index
 *        index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

if ((n & (1 << index)) == 0)
return (0);

return (1);
}
