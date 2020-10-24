#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - Print numbers followed by a new line.
 *@separator: The string to be printed between numbers.
 *@n: The number of integers passed to the function.
 *
 *Return: numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num;
unsigned int i;

va_start(num, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(num, int));

if (1 != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");

va_end(num);
}
