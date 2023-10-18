#include "main.h"
int my_parser(const char *format, va_list args);
/**
 * my_parser - parse the format string and check for format
 * specifiers and print arguments passed to the function
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
	int i_specifier;
	int unint_specifier;
	int decml_specifier;
	int X_specifier;
	int binary_specifier;
	int is_octa;

	for (p = format; *p; p++)
	{
		if (*p != '%')
		{
			_putchar(*p);
			len_count++;
		}
		else
		{
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
				c = va_arg(args, int);
				handle_char(c);
				len_count++;
			}
			else if (*p == 's')
			{
				str = va_arg(args, char *);
				len_count += handle_str(str);
			}
			else if (*p == 'd')
			{
				integer = va_arg(args, int);
				len_count += handle_int(integer);
			}
			else if (*p == 'i')
			{
				i_specifier  = va_arg(args, int);
				len_count += handle_int(i_specifier);
			}
			else if (*p == 'u')
			{
				unint_specifier  = va_arg(args, unsigned int);
				len_count += handle_unint(unint_specifier);
			}
			else if (*p == 'x')
			{
				decml_specifier  = va_arg(args, unsigned int);
				len_count += handle_hexadecimal(decml_specifier);
			}
			else if (*p == 'X')
			{
				X_specifier  = va_arg(args, unsigned int);
				len_count += handle_hexadecimal_uppercase(X_specifier);
			}
			else if (*p == 'b')
			{
				binary_specifier  = va_arg(args, unsigned int);
				len_count += handle_binary(binary_specifier);
			}
			else if (*p == 'o')
			{
				is_octa = va_arg(args, unsigned int);
				len_count += handle_unint_octal(is_octa);
			}
			else
			{
				return (-1);
			}
		}
	}
	return (len_count);

}
