#include "main.h"

/**
 * convert_size_unsgnd - that Casts a number to specified size
 * @num: Number to be casted
 * @size: Number indicating the type to be casted
 *
 * Return: Casted value
 */

long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);
	return ((unsigned int)num);
}
