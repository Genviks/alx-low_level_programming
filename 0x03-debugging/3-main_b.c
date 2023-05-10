#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year
* Return: 0
*/
int main(void)
{
	int month;
	int day;
	int year;

	month = 2;
	day = 29;
	year = 2020;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	print_remaining_days(month, day, year);

	month = 2;
	day = 29;
	year = 2001;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	print_remaining_days(month, day, year);

	return (0);
}
