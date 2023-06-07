#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the head of the linked list
 *
 * Return: the size of the list that was freed or
 * the function sets the head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t num = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{

		num++;
		next = current->next;

		current->next = NULL;
		free(current);

		if (next >= current)
			break;

		current = next;
	}
	h = NULL;

	return (num);
}
