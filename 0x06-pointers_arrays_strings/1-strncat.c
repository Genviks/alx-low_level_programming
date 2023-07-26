#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: the destination of the strings
 * @src: source of the string
 * @n: amount of bytes used from source
 * Return: the pointer to the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
