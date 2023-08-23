#include "main.h"


/**
  * print_string - function that write the string to stdout
  * @args: input arguments
  * @buf: pointer to the string
  * @nbuf: no of the string
  * Return: no of the string
  */

int print_string(va_list args, char *buf, unsigned int nbuf)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = NULL;
	return (print_buffer(str, strlen(str)));
}
