#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_char - function that print characters
 * @args: argument list function
 * Return: 0
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));

	return (0);
}

/**
 * print_string - function that print strings
 * @args: argumnet list function
 * Return: -2
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
 * @args: list of arguments
 * Return: 0 value
 */

int print_percentage(va_list args __attribute__((unused)))
{
	_putchar('%');

	return (0);
}
