#include "holberton.h"

/**
 *rev_string - Cause a string to be reversed
 *@s: String to be reversed
 */
void rev_string(char *s)
{
int len = 0, index = 0;
char m;

while (s[index++])
len++;
for (index = len - 1; index >= len / 2; index--)
{
m = s[index];
s[index] = s[len - index - 1];
s[len - index - 1] = m;
}

}
