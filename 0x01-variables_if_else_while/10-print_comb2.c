/*
 * File: 10-print_comb2.c
 * Auth: Ewar James <ewaarjames@gmail.com>
 */


#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int i;
int j;

for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
putchar(i);
putchar(j);
if (i < 57 || j < 57)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
