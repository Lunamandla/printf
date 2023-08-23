#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_char - function that print characters
 * @args: argument list
 * Return: 0
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));

	return (0);
}

/**
 * print_string - function that print string or characters
 * @args: argument list
 * Return: value of fmt function
 */
int print_string(va_list args)
{
	int i = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	if (str[0] == '\0')
		return (-2);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (--i);
}

/**
 * print_percentage - function that prints percentage
 * @args: argument list
 * Return: 0
 */
int print_percentage(va_list args __attribute__((unused)))
{
	_putchar('%');

	return (0);
}

/**
 * print_int_d - function that produce output according to format
 * @args: argument list
 * Return: value
 */
int print_int_d(va_list args)
{
	int i, j, len, int_arg, print_count = 0, is_int_min = 0;
	int *int_arr;

	int_arg = va_arg(args, int);

	is_int_min = is_negative(&int_arg, &print_count);

	len = get_int_len(int_arg);
	j = len;
	print_count += len;

	int_arr = malloc(len * sizeof(int));
	if (int_arr == NULL)
		return (-1);

	while (j--)
	{
		i = int_arg % 10;
		if (is_int_min)
		{
			i++;
			is_int_min = 0;
		}
		int_arr[j] = i;
		int_arg /= 10;
	}

	i = 0;
	j = len;
	while (j--)
	{
		_putchar(int_arr[i] + '0');
		i++;
	}

	free(int_arr);

	return (--print_count);
}
