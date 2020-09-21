/*
 * File: 8-print_base16.c
 * Auth: Ewar James <ewaarjames@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints alphabet in lowercase followed by a new line
 *
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
