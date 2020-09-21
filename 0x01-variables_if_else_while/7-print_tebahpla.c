/*
 * File: 7-print_tebahpla.c
 * Auth: Ewar James <ewaarjames@gmail.com>
 */

#include <stdio.h>

/**
 * main -Prints the lowercase alphabet in reverse
 *
 *Description: Uses a for loop and putchar to output letters
 * and then a new line after it is finished
 * Return: returns 0;
 */
int main(void)
{
char a;

for (a = 'z'; a >= 'a'; a--)
putchar(a);
putchar('\n');
return (0);
}
