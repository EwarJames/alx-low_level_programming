#include "lists.h"
#include <string.h>

/**
 *add_nodeint - Adds a new node at the beginning of a list.
 *@head: A pointer to the head of the structure listint_t list.
 *@n: integer.
 *
 *Return: If the function fails - NULL.
 *        Otherwise - Address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
int length;
listint_t *newptr;

newptr = malloc(n * sizeof(listint_t));
if (newptr == NULL)
return (NULL);

for (length = 0; length <= n; length++)

newptr->n = length;
newptr->next = *head;

*head = newptr;
return (newptr);
}
