#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found
 * respectively, to be less than, to match or be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{

		if (s1[i] != s2[i])
	{
			return (s1[i] - s2[i]);
	}
		i++;
	}

	return (0);
}
