#include "lists.h"

/**
 * listint_t - a function that return the number of elements in a linked list
 * @h: linked list of type listint_ to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
