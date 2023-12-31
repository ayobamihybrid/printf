#include "main.h"

/**
 * print_rev_string - Print a string in the reverse
 * @list: List of arguments
 *
 * Return: Lengths of the string
 **/
int  print_rev_string(va_list list)
{
	int i, size;
	const char *str;

	str = va_arg(list, const char *);

	size = _strlen(str);

	for (i = size - 1; i >= 0; i--)
		_putchar(str[i]);

	return (size);
}
