#include <stdio.h>
#include "holberton.h"
/**
 * print_array - print an array
 * @a: pointer
 * @n: array length
 * Return: No return
 */

void print_array(int *a, int n)
{
int c;

c = 0;
while (c < n)
{
printf("%d", (a[c]));
if (c < n - 1)
{
putchar(44);
putchar(32);
}
c++;
}
putchar(10);
}
