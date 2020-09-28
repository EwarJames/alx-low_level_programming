#include "holberton.h"

/**
 * swap_int - Swaps the values of two intergers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * return: no return
 */

void swap_int(int *a, int *b)
{
int t;

t = *b;
*b = *a;
*a = t;

}
