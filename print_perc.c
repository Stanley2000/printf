#include "main.h"
/**
  * print_percent - a function that print the percent sign
  * @args: the input arg
  * @buf: the pointer to the input arg
  * @nbuf: the no of input arg
  * Return: the no of the buf
  */

int print_percent(va_list args, char *buf, unsigned int nbuf)
{
	(void)args;
	(void)buf;
	(void)nbuf;
	return (print_buf("%", 1));
}
