/*
 * File: 1-last_digit.c
 * Auth: Ewar James <ewaarjames@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints "Programming is like building a multilingual
 *                puzzle, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
int n, j;

srand(time(0));
n = rand() - RAND_MAX / 2;
j = n;
n %= 10;
printf("Last digit of %i is %i ", j, n);
if (n > 5)
printf("and is greater than 5\n");
else if (n < 6 && n != 0)
printf("and is less than 6 and not 0\n");
else
printf("and is 0\n");
return (0);
}
