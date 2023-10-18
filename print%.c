#include "main.h"

/**
 * print% - Print percentage sign
 * @types: List of arguments
 * @flags: to calculates active flags
 * @buffer: Buffer array to handle print
 * @precision: for precision specification
 * @width: to get width.
 * @size: the size specifier
 *
 * Return: The Number of % printed
 */
int print_perc(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}
