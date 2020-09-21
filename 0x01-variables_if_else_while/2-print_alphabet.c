/*
 * File: 2-print_alphabet.c
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
char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
