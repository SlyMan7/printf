#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/**
 *
 * Task 0
 *
 */

void printc(const char *format, ...); //prints characters
void printS(va_list str); //prints strings
int print%(void); //prints percentage sign
int strlen(char *s); // finds the length of string
int _strlencon(const char *s); //strlen for constant characters

/**
 *
 * Task 1
 *
 */


/**
 *
 * Task 2
 *
 */

int printb(va_list val);

/**
 *
 * Task 6
 *
 */

int printh(unsigned long int hex);//converts to hexadecimal
int printp(va_list po);// prints the pointer format
#endif
