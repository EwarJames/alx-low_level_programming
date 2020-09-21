/*
 * File: 4-print_alphabt.c
 * Auth: Ewar James <ewaarjames@gmail.com>
 */

#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
int a;

for (a = 'a'; a <= 'z'; a++)
{
if (a != 'q' && a != 'e')
{
putchar(a);
}
}
putchar('\n');
return (0);
}
