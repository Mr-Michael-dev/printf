#include "main.h"
int my_parser(const char *format, va_list args);
/**
 * my_parser - parse the format string and check for format specifiers
 * and print arguments passed to the function
 * @format: The format string
 * @args: arguments passed from _printf
 *
 * Return: total length printed
 */

int my_parser(const char *format, va_list args)
{
	int len_count = 0;
	const char *p;
	char c;
	char *str;
	int integer;

	for (p = format; *format; p++)
	{
		if (*p == NULL)
			return (-1);
		if (*p != '%')
		{
			_putchar(*p);
			len_count++;
		}
		else
			p++;
		if (*p == '\0')
			break;
		if (*p == '%')
		{
			_putchar('%');
			len_count++;
		}
		else if (*p == 'c')
		{
			c = va_arg(args, char);

			handle_char(c);
			len_count++;
		}
		else if (*p == 's')
		{
			str = va_arg(args, char *);
			handle_string(str);
			len_count++;
		}
		else if (*p == 'd')
		{
			integer = va_arg(args, int);

			handle_int(integer);
			len_count++;
		}
	}
	return (len_count);
}
