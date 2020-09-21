/*
 * File: 5-print_numbers.c
 * Auth: Ewar James <ewaarjames@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Description: Uses a for loop to putchar all numbers from 0-9
 * Return: Always 0.
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
printf("%i", n);
putchar('\n');
return (0);
}
