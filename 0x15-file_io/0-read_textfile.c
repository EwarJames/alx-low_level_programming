#include "holberton.h"

/**
 *read_textfile - Reads a text file and prints
 *                        it to the POSIX standard output.
 *@filename: A pointer to the name of the file.
 *@letters: The number of letters it
 *          should read and print.
 *
 *Return: If the function fails or filename is NULL - 0.
 *         Otherwise - the actual number of bytes the
 *                      function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t f_o, f_r, f_w;
char *buff;

if (filename == NULL)
return (0);

buff = malloc(sizeof(char) * letters);

if (buff == NULL)
return (0);

f_o = open(filename, O_RDONLY);
f_r = read(f_o, buff, letters);
f_w = write(STDOUT_FILENO, buff, f_r);

if (f_o == -1 || f_r == -1 || f_w == -1 || f_w != f_r)

{
free(buff);
return (0);
}

free(buff);
close(f_o);

return (f_w);
}
