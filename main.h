#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
void print_buffer(char buffer[], int *buff_ind);
int handle_print(const char *fmt, int *i, va_list list, char buffer[], int flags, int width, int precision, int size);
int printc(va_list types, char buffer[], int flags, int width, int precision, int size);
int prints(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_perc(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int printbi(va_list types, char buffer[], int flags, int width, int precision, int size);
int printun(va_list types, char buffer[], int flags, int width, int precision, int size);
int printuno(va_list types, char buffer[], int flags, int width, int precision, int size);
int printunhex(va_list types, char buffer[], int flags, int width, int precision, int size);
int printunuphex(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hex(va_list types, char map_to[], char buffer[], int flags, char flag_ch, int width, int precision, int size);
int printnon(va_list types, char buffer[], int flags, int width, int precision, int size);
int printp(va_list types, char buffer[], int flags, int width, int precision, int size);
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
int printrev(va_list types, char buffer[], int flags, int width, int precision, int size);
int printrot13(va_list types, char buffer[], int flags, int width, int precision, int size);
int handle_write_char(char c, char buffer[], int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[], int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision, int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length, int width, int flags, char padd, char extra_c, int padd_start);
int write_unsgnd(int is_negative, int ind, char buffer[], int flags, int width, int precision, int size);
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

#endif

