#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_fmt_fn - function that gets function pointer
 * @c: character
 * Return: value of get format functio
 */

int (*get_fmt_fn(char c))(va_list)
{
	/**
	* struct fmt_fn - user-defined datatypes tha group defferent datatype
	*/
	fmt_fn fmt_fn_arr[] = {
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

