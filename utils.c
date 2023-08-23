#include <stdio.h>
#include "main.h"

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

int print_int_min(int n __attribute__((unused)))
{
	return (0);
}
