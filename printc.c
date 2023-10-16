#include "main.h"
#include <stdarg.h>

/**
 * printc - prints out the characters it receives
 * @format - the number of arguments
 */

void printc(const char *format, ...)
{
	char character;
	va_list cs;
	
	va_start(cs, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				character = va_arg(cs, char);
				_putchar(character);
			}
		}
		else
		{
			_putchar(*format);
		}

		format++;
	}

	va_end(cs);
}
