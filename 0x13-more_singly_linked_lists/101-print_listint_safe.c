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
	const lintint_t *slow, *fast;
	size_t num = 0;

	if (head == NULL)
		return (0);

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)slow, slow->n);
		num++;
	}

	return (num);
}
