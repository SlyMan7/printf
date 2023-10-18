#include "main.h"

/************************* PRINT CHAR *************************/

/**
 * print_char - that Prints a character
 * @types: List a of arguments
 * @flags: to calculates active flags
 * @size: Size specifier
 * @precision: Precision specification
 * @width: Width
 * @buffer: An array to handle print
 *Return: Number of chars printed
 */
int printc(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
