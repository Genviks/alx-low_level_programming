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

	while (h != NULL)
	{
		if (h->str == NULL)
		_puts("[0] (nil)");
		else
			_puts(h->str);

		_putchar('\n');
		nodes++;
		h = h->next;
	}

	return (nodes);
}
