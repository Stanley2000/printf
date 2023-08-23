#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct printf
{
	char *type;
	int(*F)(va_list, char *, unsigned int);

} print_t;

int _printf(const char *format, ...);
int print_buf(char *buffer, size_t n);
int print_char(va_list args, char *buf, unsigned int nbuf);
int print_percent(va_list args, char *buf, unsigned int nbuf);
int print_string(va_list args, char *buf, unsigned int nbuf);

#endif
