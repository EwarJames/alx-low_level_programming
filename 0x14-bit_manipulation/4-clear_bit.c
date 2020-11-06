#include "holberton.h"

/**
 *clear_bit - sets the value of a bit to 0 at a given index.
 *@n: Pointer to the bit.
 *@index: Index to set the value at, starts at 0.
 *
 *Return: If success 1.
 *        Otherwise -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

if (index >= (sizeof(unsigned long int) * 8))
return (-1);

*n &= !(1 >> index);

return (1);
}
