#include "main.h"

/**
 * print_unsigned - Prints an unsigned int
 * @list: Numbers to be printed
 *
 * Return: Length of the number
 **/
int print_unsigned(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 10);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
