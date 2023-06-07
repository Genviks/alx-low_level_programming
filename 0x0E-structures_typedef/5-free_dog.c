#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - frees the memory allocated for a dog structure
 * @d: pointer to the dog structure to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);

}
