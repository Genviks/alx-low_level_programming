#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - a function that prints a listint_t linked list
 *@head: the pointer to the head of the linked list
 *
 * Return: the number of nodes in the list.
 * if the function fails, it exits the program with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *loop_start = NULL;
	size_t num = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		num++;

		if (current > current->next || current == loop_start)
			break;

		if (current->next == head)
			loop_start = head;

		current = current->next;
	}

	if (current && current->next)
	{
		printf("-> [%p] %d\n", (void *)current->next, current->next->n);
		exit(98);
	}

	return (num);
}
