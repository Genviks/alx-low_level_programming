#ifndef LINKED
#define LINKED

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked
 * @str: String - (malloc'd string)
 * @len: the length of the string
 * @next:cpoints to the next node
 *
 * Description: the singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *Next;
}
list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /*LINKED*/
