#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0 (success)
 */

int main(void)
{
	long int number = 612852475143;
	long int i;

	while (number % 2 == 0)
	{
	number /= 2;
	i = 2;
	}

	for (i = 3; i <= sqrt(number); i += 2)
	{
	while (number % i == 0 && i < number)
	}
	number /= i;
	}
	}

	printf("%ld\n", number);

	return (0);
}
