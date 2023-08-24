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
 * print_recursive - print 0s and 1s recursively
 * @n: base 10 number
 * @i: first tracking number
 * @j: second tracking number
 * @len: total number of 0s and 1s
 *
 * Return: Always 0
*/
int print_recursive(unsigned int n, unsigned int i, unsigned int j, int *len)
{
	unsigned int k;

	if (j >= n)
	{
		_putchar(1 + '0');
		return (i / 2);
	}

	j += i;
	i += i;
	*len += 1;

	j = print_recursive(n, i, j, len);

	k = i / 2;
	if (k == 1)
	{
		return (0);
	}

	j += k / 2;
	if (j <= n)
	{
		_putchar(1 + '0');
		return (j);
	}
	else
	{
		_putchar(0 + '0');
		return (j -= k / 2);
	}

	return (0);
}

