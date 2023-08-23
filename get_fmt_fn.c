#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_fmt_fn - function that produce output according to format
 * @c: declared variable
 * Return: value
 */

int (*get_fmt_fn(char c))(va_list)
{
/**
 * fmt_fn - struc that groups diff datatypes intonew single data types
 */
	struct fmt_fn fmt_fn_arr[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{' ', print_nothing},
		{'\0', print_nothing},
		{'d', print_int_d},
		{'i', print_int_d},
		{0, NULL}
	};

	int i = 0;

	while (fmt_fn_arr[i].fn_ptr != NULL)
	{
		if (fmt_fn_arr[i].c == c)
			return (fmt_fn_arr[i].fn_ptr);
		i++;
	}
	return (print_no_fmt);
}

