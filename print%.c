#include "main.h"

/**
 * print% - Prints a percent sign
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * Return: Number of % printed
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

