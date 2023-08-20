#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - print formatted string
 * @format: formated string
 *
 * Return: number of printed bytes
 */
int _printf(const char *format, ...)
{
	int i = 0;
	char nextChar;
	int count = 0;

	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			nextChar = format[i + 1];
			if (nextChar == 'c')
				i += _putchar(va_arg(args, int));
			else if (nextChar == 's')
				i += print_string(va_arg(args, char *));
			else if (nextChar == '%')
				i += _putchar('%');
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	count += i;
	va_end(args);

	return (count);
}

