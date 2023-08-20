#include <stdio.h>
#include <stdarg.h>
#include "main.h"



int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;
	char nextChar;

	va_start(args, format);

	while(format[i] != '\0')
	{
		if (format[i] == '%')
		{
			nextChar = format[i + 1];
			if (nextChar == 'c')
			{
				_putchar(va_arg(args, int));
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

