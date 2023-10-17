#include "main.h"

/**
 * is_digit - that Verifies if a char is a digit or not
 * @c: the Char to be evaluated
 *
 * Return: 1 if c is a digit, 0 if c is not
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

