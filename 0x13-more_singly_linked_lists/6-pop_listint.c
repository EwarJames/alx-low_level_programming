#include "lists.h"


/**
 *pop_listint - Deletes the head of the node listint_t.
 *@head: Pointer to listint_t.
 *
 *Return: If the head node is empty - 0.
 *        Otherwise - the head node's data.
 */
int pop_listint(listint_t **head)
{

listint_t *temp = *head;
int key;

if (*head == NULL)
return (0);

key = (*head)->n;
*head = (*head)->next;

free(temp);

return (key);
}
