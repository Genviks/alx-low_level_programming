#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of characters from s2 to concatenate.
 *
 * Return: a pointer to the newly allocated concatenates string
 * or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int len1 = 0, len2 = 0;
	char *result = NULL;

	if (s1 == NULL)
		s1 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc((len1 + n + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	strncpy(result, s1, len1);

	strncpy(result + len1, s2, n);

	{
		result[len1 + n] = '\0';
	}

	return (result);
}
