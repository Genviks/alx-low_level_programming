#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0 (success)
 */

int main(void)
{
    long x, maxf, factor;
    long number = 612852475143;
    double square = sqrt(number);
    maxf = 1;

    for (x = 2; x <= square; x++)
    {
        if (number % x == 0)
        {
            factor = number / x;
            int is_prime = 1;
            for (int i = 2; i <= sqrt(x); i++)
            {
                if (x % i == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime && x > maxf)
            {
                maxf = x;
            }
            is_prime = 1;
            for (int i = 2; i <= sqrt(factor); i++)
            {
                if (factor % i == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime && factor > maxf)
            {
                maxf = factor;
            }
        }
    }
    // Handle the case where the input number is a prime number
    if (maxf == 1)
    {
        maxf = number;
    }
    printf("%ld", maxf);

    return (0);
}
