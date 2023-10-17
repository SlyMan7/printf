#include "main.h"

int printb(va_list val)
{
	int i, bit;
	int count = 0;
	unsigned int c = va_arg(val, unsigned int);

	for (i = 31 ; i >= 0 ; i--)
	{
		bit = (c >> i) & 1;
		if (bit == 1 || count > 0)
		{
			_putchar(bit + '0');
			count++;
		}
	}

	if (count == 0)
	{
		_putchar('0');
		count++;
	}

	return (count);
}
