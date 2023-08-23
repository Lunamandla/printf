#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that produces output according to format
 *
 * Return: value to get format
 */
int _printf(char const *format, ...)
{
	int i = 0, len = 0, j;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = get_fmt_fn(format[i + 1])(args);
			if (j == -1)
				return (j);
			else if (j == -2)
			{
				i++;
				len--;
			}
			else if (j >= 0)
			{
				len += j;
				i++;
			}
			else
				_putchar(format[i]);
		}
		else
			_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);

	return (len);
}
