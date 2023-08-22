#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int print_char(va_list args)
{
	_putchar(va_arg(args, int));

	return (0);
}

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

int print_percentage(va_list args __attribute__((unused)))
{
	_putchar('%');

	return (0);
}
