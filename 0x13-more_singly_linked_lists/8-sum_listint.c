#include "lists.h"

/**
 * sum_listint - a function that calculates the sum of all the data
 * of a linked list
 * @head: the pointer to the first node in the linked  list
 *
 * Return: sum of all the data in the linked list, 0 if empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;

	int sum = 0;

	while (current != NULL)
	{

		sum += current->n;
		current = current->next;
	}

	return (sum);
}
