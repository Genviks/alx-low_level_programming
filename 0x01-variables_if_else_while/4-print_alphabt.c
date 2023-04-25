#include <stdio.h>
/**
 * main -main function
 *
 * Return: Return (0) on success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{

	if (letter != 'e' && letter != 'q')
	{
		putchar(letter);
	}
	letter++;
	}

	putchar('\n');

	return (0);
}
