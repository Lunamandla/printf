#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_nothing - function to print null
 *
 * Return: -1 for print_nothing
 * @args: holds the intformation for va_start and va_end function
 */

int print_nothing(va_list args __attribute__((unused)))
{
	return (-1);
}

/**
 * print_no_fmt - does not print formart
 *
 * Return: -3 for  print_no_fmt
 * @args: holds the intformation for va_start and va_end function
 */
int print_no_fmt(va_list args __attribute__((unused)))
{
	return (-3);
}
