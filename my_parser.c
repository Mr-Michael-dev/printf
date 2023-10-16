#include "main.h"
my_parser(const char *format, va_list args)
{
	int len_count;

	for (const char *format = format; *format; format++)
	{
		if (format == NULL)
			return (-1);
		if (*format != '%')
		{
			_putchar(*format);
			len_count++;
		}
		else
			format++;
		if (*format == '\0')
			break;
		if (*formatt == '%')
		{
			_putchar('%');
			len_count++;
		}
		else if (*format == 'c')
		{
			char c = va_arg(args, char);

			handle_char(c);
			len_count++;
		}
		else if (*format == 's')
		{
			char *str;

			str = va_arg(args, char *);
			handle_string(str);
			len_count++;
		}
		else if (*format == 'd')
		{
			int integer = va_arg(args, int);

			handle_int(integer);
			len_count++;
		}
	}
	return (len_count);
}
