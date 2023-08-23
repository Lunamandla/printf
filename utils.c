#include <stdio.h>
#include "main.h"

/**
 * get_int_len - function to get the length of the integer
 * @n: number of charcaters
 *
 * Return: value
 */
int get_int_len(int n)
{
	int i = 0;

	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (++i);
}

/**
 * is_negative - function to check if the number are negetive
 * @n: pointer to function
 * @print_count: pointer that count characters
 * Return: 0
 */
int is_negative(int *n, int *print_count)
{
	if (*n < 0)
	{
		*n *= -1;
		_putchar('-');
		*print_count += 1;
	}
	if (*n < 0)
	{
		*n += 1;
		*n *= -1;
		return (1);
	}

	return (0);
}

/**
 * print_int_min - function that prints minimum
 * @n: unused attribute
 * Return: 0
 */
int print_int_min(int n __attribute__((unused)))
{
	return (0);
}
