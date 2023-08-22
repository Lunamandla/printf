#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_fmt_fn - function that gets function pointers
 * @c: character
 * Return: value of get format function
 */

int (*get_fmt_fn(char c))(va_list)
{
/**
 * struct fmt_fn - user-defined datatypes that group different datatypes
 */
	struct fmt_fn fmt_fn_arr[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{' ', print_nothing},
		{'\0', print_nothing},
		{0, NULL}
	} fmt_fn;

	int i = 0;

	while (fmt_fn_arr[i].fn_ptr != NULL)
	{
		if (fmt_fn_arr[i].c == c)
			return (fmt_fn_arr[i].fn_ptr);
		i++;
	}
	return (print_no_fmt);
}

