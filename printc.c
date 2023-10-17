#include "main.h"

/************************* PRINT CHAR *************************/

/**
 * print_char - Prints a character
 * @types: List a of arguments
 *Return: Number of chars printed
 */
int printc(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
