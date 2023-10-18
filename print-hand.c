#include "main.h"

/**
 * handle_print - that Prints an argument based on its type
 * @fmt: the formatted string in which to print the arguments.
 * @list: List arguments to be printed.
 * @ind: ind
 * @buffer: An array to handle print.
 * @flags: Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: the size specifier
 *
 * Return: 1 or 2 if otherwise;
 */

int handle_print(const char *fmt, int *ind, va_list list, char buffer[],
		int flags, int width, int precision, int size)
{
	int i, unknow_len = 0, printed_chars = -1;
	fmt_t fmt_types[] = {
		{'c', printc}, {'s', prints}, {'%', print_perc},
		{'i', print_int}, {'d', print_int}, {'b', printbi},
		{'u', printun}, {'o', printuno}, {'x', printunuphex},
		{'X', printunuphex}, {'p', printp}, {'S', printnon},
		{'r', printrev}, {'R', printrot13}, {'\0', NULL}
	};
	for (i = 0; fmt_types[i].fmt != '\0'; i++)
		if (fmt[*ind] == fmt_types[i].fmt)
			return (fmt_types[i].fn(list, buffer, flags, width, precision, size));

	if (fmt_types[i].fmt == '\0')
	{
		if (fmt[*ind] == '\0')
			return (-1);
		unknow_len += write(1, "%%", 1);
		if (fmt[*ind - 1] == ' ')
			unknow_len += write(1, " ", 1);
		else if (width)
		{
			--(*ind);
			while (fmt[*ind] != ' ' && fmt[*ind] != '%')
				--(*ind);
			if (fmt[*ind] == ' ')
				--(*ind);
			return (1);
		}
		unknow_len += write(1, &fmt[*ind], 1);
		return (unknow_len);
	}
	return (printed_chars);
}
