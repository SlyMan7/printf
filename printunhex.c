#include "main.h"

/**
 * printunhex - Prints unsigned number in hexadecimal notation
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 *
 * Return: Number of chars printed
 */

int printunhex(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	return (print_hex(types, "0123456789abcdef", buffer,
		flags, 'x', width, precision, size));
}
