#include "main.h"

/**
 * print% - Print percentage sign
 * @types: List of arguments
 * @buffer: Buffer array to handle print
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
