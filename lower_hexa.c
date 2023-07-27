#include "main.h"

/**
 * print_hexadecimal_low - Print a number in the hexadecimal format
 * @list: Number to be printed
 *
 * Return: Length of the number
 **/
int print_hexadecimal_low(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 16);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
