/*
 * File: 8-print_base16.c
 * Auth: Ewar James <ewaarjames@gmail.com>
 */

#include <stdio.h>

/**
 * main - outputs all numbers in base16
 *
 * Description: Uses a for loop to putchar all numbers from 0-8
 * then uses another loop to putchar letters a-f
 * Return: Always 0.
 */
int main(void)
{
char a;

for (a = 'z'; a >= 'a'; a--)
putchar(a);
putchar('\n');
return (0);
}
