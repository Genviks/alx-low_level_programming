#include "main.h"

/**
 * get_endianness - checks if a mchine is a big endian or is little
 *
 * Return: 0 for big endian, or 1 for little machine
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

