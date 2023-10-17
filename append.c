#include "main.h"

/**
 * append_hexa_code - to Append ascci in hexadecimal code to buffer
 * @buffer: Array of chars.
 * @i: the Index to start appending.
 * @ascii_code: ASSCI CODE
 *
 * Return: 3
 */

int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}
