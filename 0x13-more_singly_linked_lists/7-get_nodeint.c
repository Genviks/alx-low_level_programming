#include "lists.h"

/**
 * get_nodeint_at_index - reteurns the nth node of a lintint_list linked list
 * @head: pointer to the first node of the linked list
 * @index: index of the node to retrieve, starting from 0
 *
 * Return: pointer to the nth node, or Null if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
	count++;
	current = current->next;
	}

	return (NULL);
}
