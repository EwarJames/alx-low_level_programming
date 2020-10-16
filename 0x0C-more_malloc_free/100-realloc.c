#include "holberton.h"
#include <stdio.h>

/**
 *_realloc - Reallocates a memory block using malloc and free
 *@ptr: Pointer to the memory previously allocated with a call to
 *      malloc:malloc(old_size)
 *@old_size: The size in bytes of the allocated space for ptr
 *@new_size: The new size in bytes of the new memory block
 *
 *Return: If new_size > old_size, the "added" memory should not be initialized
 *        If new_size == old_size, return ptr
 *        If ptr = NULL, the call is equal to malloc(new_size)
 *        If new_size == 0, and ptr != NULL, the call is free(ptr) -NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *m;
char *ptr_copy, *filler;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
m = malloc(new_size);

if (m == NULL)
return (NULL);

return (m);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
ptr_copy = ptr;
m = malloc(sizeof(*ptr_copy) * new_size);

if (m == NULL)
{
free(ptr);
return (NULL);
}
filler = m;

for (i = 0; i < old_size && i < new_size; i++)
filler[i] = *ptr_copy++;

free(ptr);
return (m);
}
