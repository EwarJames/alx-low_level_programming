#include "lists.h"

/**
 *dlistint_len - Returns the number of elements in a linked dlistint_t list.
 *@h: The head of the dlistint_t list.
 *
 *Return: Number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
