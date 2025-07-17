#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
*struct type - the type of the char
*@t: the char
*@f: a pointer to the fonction to use
*/

typedef struct type
{
	char *t;
	void (*f)(va_list);
} type_t;

void print_char(va_list type_of);
void print_int(va_list type_of);
void print_float(va_list type_of);
void print_str(va_list type_of);

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
