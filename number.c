#include "main.h"

/**
 * write_number - that Prints 
 * @is_negative: list of arguments
 * @ind: character types
 * @buffer: an array to handle print
 * @flags:  to calculates active flags
 * @width: get width
 * @precision: precision specifier
 * @size: the size specifier
 *
 * Return: the number of chars printed.
 */

int write_number(int is_negative, int ind, char buffer[],
	int flags, int width, int precision, int size)
{
	int length = BUFF_SIZE - ind - 1;
	char padd = ' ', extra_ch = 0;

	UNUSED(size);

	if ((flags & F_ZERO) && !(flags & F_MINUS))
		padd = '0';
	if (is_negative)
		extra_ch = '-';
	else if (flags & F_PLUS)
		extra_ch = '+';
	else if (flags & F_SPACE)
		extra_ch = ' ';

	return (write_num(ind, buffer, flags, width, precision,
		length, padd, extra_ch));
}

