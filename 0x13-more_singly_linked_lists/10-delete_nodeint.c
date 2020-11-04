#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at index index
 *                          of a listint_t linked list.
 *@head: Pointer to the listint.
 *@index: Index to be deleted. starts at 0.
 *
 *Return: If succeeds return 1.
 *        Otherwise - return -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *ret = *head;
unsigned int nodeint = 0;

if (ret == NULL)
return (-1);

if (index == 0)

{
*head = (*head)->next;
free(ret);
return (1);
}

while (nodeint != (index - 1))
{
nodeint++;
if (ret->next == NULL)
return (-1);

ret = ret->next;
}

temp = ret->next;
ret->next = temp->next;
free(temp);
return (1);
}
