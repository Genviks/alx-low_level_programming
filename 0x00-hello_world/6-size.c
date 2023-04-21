#include <stdio.h>
/**
 * main - a C program that prints the size of various types on the computer it is compiled and run on
 * Return: Return (0) done
 */

int main(void)
{
	char 1;
	int 2;
	long int 3;
	long long int 4;
	float 5;

printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(1));
printf("Size of a int: %lu byte(s)\n", (unsigned long) sizeof(2));
printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(3));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(4));
printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(5));
return (0);
}
