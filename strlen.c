#include "main.h"

/**
 * strlen - counts lentgh of string
 * @str: pointer to string
 * Return: the length of string
 */

int _strlen(char *str)
{
	int len;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

#include "main.h"
#include<string.h>

/**
 * _strlencon - counts string length for constant characters
 * @s: string to be checked
 * Return: returns the length
 */

int _strlencon(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
