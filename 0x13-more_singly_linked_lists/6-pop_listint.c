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
	listint_t *temp;
	int data;

	if (!head || !*head)
	       return (0);


	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
