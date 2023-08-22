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
	int i = 0, len = 0;
	char c;
	char *s;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					c = va_arg(args, int);
					_putchar(c);
					i++;
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "(nill)";
					len += print_string(s);
					i++;
					break;
				case '%':
					_putchar('%');
					i++;
					break;
				case '\0':
				case ' ':
					return (-1);
				default:
				_putchar('%');
			}
		}
		else
		{
			_putchar(format[i]);
		}
		len ++;
		i++;
	}

	va_end(args);

	return (len);
}

