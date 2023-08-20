#include <stdio.h>
#include "main.h"

/**
 * print_string - print string
 * @s: the string
 *
 * Return: length of string
*/
int print_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	i += 2;
	return (i);
}


