#include "main.h"

/**
 * is_printable - that which evaluates if a char is printable or not
 * @c: the Char to be evaluated.
 *
 * Return: 1 if c is printable, 0 if not printable
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}
