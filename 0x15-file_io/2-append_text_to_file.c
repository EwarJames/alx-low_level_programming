#include "holberton.h"

/**
 *append_text_to_file - Appends text at the end of a file.
 *@filename: Name of the file.
 *@text_content: NULL terminated string to add at the end of the file.
 *
 *Return: On success 1.
 *        On failure -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int f_w, f_o, length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[length])
length++;
}
f_o = open(filename, O_WRONLY | O_APPEND);
f_w = write(f_o, text_content, length);

if (f_o == -1 || f_w == -1)
return (-1);

close(f_o);

return (1);
}
