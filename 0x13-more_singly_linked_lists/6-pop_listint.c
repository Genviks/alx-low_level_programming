#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head of a linked list.
 * @head: pointer to the first element in the linked list
 *
 * Return: data inside the elements deleted or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}
	int num = (*head)->n;

	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);

	return (num);
}
