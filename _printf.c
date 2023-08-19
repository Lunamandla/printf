#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

// loop through the characters of format
	// if a char == %
		// check the char after %
		// if that char is c
			// call a fn to handle it
		// else
			// print the char as it is

	va_end(args);

	return (0)
}
