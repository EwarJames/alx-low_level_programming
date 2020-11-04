#include "lists.h"

/**
 *sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
 *@head: A pointer to the listint_t.
 *
 *Return: If the list is empty - 0.
 *        Otherwise - sum of nodes.
 */

int sum_listint(listint_t *head)
{
listint_t *ptr = head;

int sum = 0;
while (ptr != NULL)
{
sum += ptr->n;
ptr = ptr->next;

if (head == NULL)
return (0);
}
return (sum);
}
