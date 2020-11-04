#include "lists.h"

/**
 *get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *@head: Pointer to the listint_t.
 *@index:Tthe index of the node, starting at 0.
 *
 *Return: If the node does not exist - NULL.
 *         Otherwise - nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

i = 0;
while (i < index)
{
i++;

if (head == NULL)
return (NULL);

head = head->next;
}

return (head);
}
