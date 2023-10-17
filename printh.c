#include "main.h"

/**
 *printh - converts to hexadecimal value
 *@hex: the value to change
 *Return: the counter
 */

int printh(unsigned long int hex)
{
	long int i = 0, c = 0, *arr;
	unsigned long int temp = hex;

	if( temp == 0)
	{
		_putchar('0');
		return;
	}

	for (; temp/16 != 0 ; c++)
	{
		temp = temp / 16;
	}

	c += 1;
	arr = (long int *)malloc(sizeof(long int) * c);
	if (arr == NULL)
	{
		return;
	}

	temp = hex;
	while (i < c)
	{
		arr[i] = temp % 16;
		temp /= 16;
		i++;
	}

	i = c - 1;
	while (i >= 0)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;

		_putchar(arr[i] + '0');
		i--;
	}

	free(arr);
	return;
}
