#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;

	if (*head == NULL)
		return (-1);

	while (index != 0)
	{
		index--;
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
	}

	if (ptr == *head)
	{
		*head = ptr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		ptr->prev->next = ptr->next;
		if (ptr->next != NULL)
			ptr->next->prev = ptr->prev;
	}

	free(ptr);
	return (1);
}
