#include "main.h"
#include <stdarg.h>

/**
 * prints - prints the strings passed to it
 * @format: the number of strings
 * Return: the string length
 */

void printS(va_list str)
{
	char *temp;
	int i = 0;
	int len;

	temp = va_arg(str, char *);
	if (temp == NULL)
	{
		temp = "(null)";
		len = _strlen(temp);

		while (i < len)
		{
			_putchar(temp[i]);
			i++;
		}

		return (len);
	}
	else
	{ 
		len = _strlen(temp);
		for (i = 0 ; i < len ; i++)
			_putchar(temp[i]);

		return (len);
	}
}
