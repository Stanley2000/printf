#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable arguments
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;
	const char *fmt = format;
	print_t printers[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	va_start(args, format);

	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			int i = 0;

			while (printers[i].type)
			{
				if (*fmt == *(printers[i].type))
				{
					printed_chars += printers[i].f(args, NULL, 0);
					break;
				}
				i++;
			}
		}
		else
		{
			printed_chars += print_buf((char *)fmt, 1);
		}
		fmt++;
	}

	va_end(args);
	return (printed_chars);
}

