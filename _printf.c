#include "main.h"

/**
 * _printf - print formatted string to the screen.
 * @format: character string to print.
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int format_count;
	va_list args;

	if (format == NULL || format[0] == '\0')
	{
		return (-1);
	}

	va_start(args, format);
	format_count = my_parser(format, args);
	va_end(args);

	return (format_count);
}
