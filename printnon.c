#include "main.h"

/**
 * printnon - that which Prints ascii codes in hexa of non printable chars
 * @types: List of arguments
 * @buffer: Array to handle print
 * @flags: to calculates active flags
 * @width: to get width
 * @precision: for precision specification
 * @size: the size specifier
 * Return: the number of chars printed
 */
int printnon(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int i = 0, offset = 0;
	char *str = va_arg(types, char *);

	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[i] != '\0')
	{
		if (is_printable(str[i]))
			buffer[i + offset] = str[i];
		else
			offset += append_hexa_code(str[i], buffer, i + offset);
		i++;
	}
	buffer[i + offset] = '\0';
	return (write(1, buffer, i + offset));
}

