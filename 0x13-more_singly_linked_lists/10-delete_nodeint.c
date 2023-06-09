#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint-t linked list
 * @index: the node that should be deleted, which starts from 0
 * @head: pointer to the first node of the linked list
 *
 * Return: 1 if deletion is successful, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);

		return (1);
	}

	current = *head;
	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
