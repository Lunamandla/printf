#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * handle_s - handle string
 * @s: string
*/
void handle_s(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		_putchar(s[j]);
		j++;
	}
}

/**
 * _printf - print formatted string
 * @format: formated string
 *
 * Return: number of printed bytes
*/
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;
	char nextChar;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			nextChar = format[i + 1];
			if (nextChar == 'c')
			{
				_putchar(va_arg(args, int));
				i++;
			}
			if (nextChar == 's')
			{
				handle_s(va_arg(args, char *));
				i++;
			}
			if (nextChar == '%')
			{
				_putchar(format[i]);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(args);

	return (0);
}

