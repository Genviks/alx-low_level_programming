#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguements passed into it
 * @argc: arguement count
 * @argc: arguement vector
 *
 * Return: Always zero
 */


int main(int argc, char *argv[])

{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
