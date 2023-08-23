#include "main.h"

/**
  * print_char - a function that print character
  * @args: input character
  * @buf: pointer to the buffer
  * @nbuf: no character to be printed
  * Return: returns the pointer to character
  */
int print_char(va_list args, char *buf, unsigned int nbuf)
{
	char c = va_arg(args, int);

	return (print_buf(&c, 1));
}
