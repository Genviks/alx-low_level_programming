#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - a function that prints all the elemnents of a linked list
 * @h: a pointer to the head of the linked list
 * Return: The number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);

	nodes++;
	h = h->next;
	}

	return (nodes);
}
