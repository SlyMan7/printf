#include "main.h"

/**
 * printrev - Prints string in reverse
 * @width: to get width
 * @size: the size specifier
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags: to calculates active flags
 * @precision: for precision specification
 *
 * Return: Numbers of chars printed
 */

int printrev(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char *str;
	int i, count = 0;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(size);

	str = va_arg(types, char *);

	if (str == NULL)
	{
		UNUSED(precision);

		str = ")Null(";
	}
	for (i = 0; str[i]; i++)
		;

	for (i = i - 1; i >= 0; i--)
	{
		char z = str[i];

		write(1, &z, 1);
		count++;
	}
	return (count);
}
