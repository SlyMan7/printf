#include "main.h"

/**
 * printunuphex - that Prints unsigned number in upper hexadecimal notation
 * @types: List of arguments
 * @buffer: An array to handle print
 * @flags:  to Calculates active flags
 * @width: to get width
 * @precision: for Precision specification
 * @size: the size specifier
 *
 * Return: the number of chars printed
 */
int printunuphex(va_list types, char buffer[], int flags, int width,
		int precision, int size)
{
	return (print_hex(types, "0123456789ABCDEF", buffer,
		flags, 'X', width, precision, size));
}
