#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 *
 * Return: Return (0) on success
 */

int main(void)

{

	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);

}
