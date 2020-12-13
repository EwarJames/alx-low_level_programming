#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new_ptr node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new_ptr node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new_ptr;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		idx--;
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_ptr = malloc(sizeof(dlistint_t));
	if (new_ptr == NULL)
		return (NULL);

	new_ptr->n = n;
	new_ptr->prev = tmp;
	new_ptr->next = tmp->next;
	tmp->next->prev = new_ptr;
	tmp->next = new_ptr;

	return (new_ptr);
}
