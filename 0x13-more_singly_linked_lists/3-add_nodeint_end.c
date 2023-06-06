#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a node at the end of a linked list
 * @head: pointer tot he first element on the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the node, or NULL if ut failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	new_node->next = NULL;

	return (new_node);
}
