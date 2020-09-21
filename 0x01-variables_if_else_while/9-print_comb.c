/*
 * File: 9-print_comb.c
 * Auth: Ewar James <ewaarjames@gmail.com>
 */

#include <stdio.h>

/**
 * main - prints 0-9 in ascending order, separate by space
 *
 * Description: Uses an if loop to print all numbers. Followed by a comma
 * deliminator and a space if under 9
 * Return: Always 0.
 */
int main(void)
{
int i;

i = 48;
while (i < 58)
{
putchar(i);
if (i < 57)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
