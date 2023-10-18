#include "main.h"

/**
 * printunhex - Prints unsigned number in hexadecimal notation
 * @types: List of arguments
 * @flags: to calculates active flags
 * @precision: for precision specification
 * @size: the size specifier
 * @buffer: Buffer array to handle print
 * @width: to get width
 *
 * Return: Number of chars printed
 */

int printunhex(va_list types, char buffer[], int flags, int width,
		int precision, int size)
{
	return (print_hex(types, "0123456789abcdef", buffer,
		flags, 'x', width, precision, size));
}
