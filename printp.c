#include "main.h"

int printp(va_list po)
{
	int i = 0, val;
	void *pointer;
	char *s = "(nil)";
	unsigned long int cast;

	pointer = va_arg(po, void *);
	if (pointer == NULL)
	{
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
		return (i);
	}
	 cast = (unsigned long int)pointer;

	 _putchar('0');
	 _putchar('x');
	 val = printh(cast);
	 return (val + 2);
}
