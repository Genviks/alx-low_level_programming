#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that writes a character to the standard output
 * @c: The character to be written and printed
 *
 * Return: On success, return the character written.
 * On error, return -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
