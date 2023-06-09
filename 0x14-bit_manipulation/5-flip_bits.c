#include "main.h"

/**
 * flip_bits - returns the num of bits to flip to get from one num to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 42; i >= 0; i--)
	{
		current = exclusive >> i;

		if (current & 1)
			num++;
	}

	return (num);
}
