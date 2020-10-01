#include "holberton.h"

/**
 *reverse_array - Reverses the content of the string
 *@a: The array of integers to be reversed
 *@n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
int k;
int j;

for (k = 0; k < (n / 2); k++)
{
j = a[k];
a[k] = a[n - k - 1];
a[n - k - 1] = j;

}
}
