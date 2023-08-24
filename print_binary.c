#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_binary - convert base 10 to binary
 * @args: argument list
 *
 * Return: length of binary number
*/
int print_binary(va_list args)
{
	unsigned int i = 1, j = 0, n;
	int len = 0;
	int *len_ptr;

	len_ptr = &len;

	n = va_arg(args, int);

	if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}

	print_recursive(n, i, j, len_ptr);

	return (--len);
}

