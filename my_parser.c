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
				if (c == NULL)
				{
					return (-1);
				}
				handle_char(c);
				len_count++;
			}
			else if (*p == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
				{
					putchar('(');
					putchar('n');
					putchar('u');
					putchar('l');
					putchar(')');
				}
				else
				{
					len_count += handle_str(str);
				}
			}
			else if (*p == 'd')
			{
				integer = va_arg(args, int);
				if (integer == NULL)
				{
					return (-1);
				}
				len_count += handle_int(integer);
			}
			else if (*p == 'i')
			{
				i_specifier  = va_arg(args, int);
				if (i_specifier == NULL)
				{
					return (-1);
				}
				len_count += handle_int(i_specifier);
			}
			else if (*p == 'u')
			{
				unint_specifier  = va_arg(args, unsigned int);
				if (integer == NULL)
				{
					return (-1);
				}
				len_count += handle_unint(unint_specifier);
			}

			else
			{
				return (-1);
			}
		}
	}
	return (len_count);

}
