/*
 * File: 3-print_alphabets.c
 * Auth: Ewar James <ewaarjames@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase
 *
 * Description: Uses a for loop and putchar to output a-z and then a new line
 * Return: Always 0.
 */
int main(void)
{
int a;

for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
for (a = 'A'; a <= 'Z'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
