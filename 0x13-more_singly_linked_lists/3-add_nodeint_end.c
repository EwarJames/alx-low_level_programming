#include "lists.h"

/**
 *add_nodeint_end - Adds a new node at the end of a list.
 *@head: A pointer to the head of the structure listint_t list.
 *@n: integers
 *
 *Return: If the function fails - NULL.
 *        Otherwise - Address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *newptr, *lastptr;

newptr = malloc(n * sizeof(listint_t));
if (newptr == NULL)
return (NULL);



newptr->n = n;
newptr->next = NULL;

if (*head == NULL)
*head = newptr;

else
{
lastptr = *head;
while (lastptr->next != NULL)
lastptr = lastptr->next;
lastptr->next = newptr;
}
return (*head);
}
