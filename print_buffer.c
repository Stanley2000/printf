#include "main.h"
/**
  * print_buf - a function that write the buffer to the stdout
  * @buffer: pointer to the buffer
  * @n: no of bytes to be printed
  * Return: no of bytes printed
  */

int print_buf(char *buffer, size_t n)
{
	return (write(1, buffer, n));
}
