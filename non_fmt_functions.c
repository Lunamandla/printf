#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int print_nothing(va_list args __attribute__((unused)))
{
	return (-1);
}

int print_no_fmt(va_list args __attribute__((unused)))
{
	return (-3);
}
