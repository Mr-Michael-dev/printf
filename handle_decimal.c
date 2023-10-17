#include "main.h"

/**
 * handle_hexadecimal - prints hexadecimal to stdout
 * @arg: integer to be printed
 *
 * Return: 0
 */

int handle_hexadecimal(unsigned int arg)
{
	char temp[24];
	int i = 0;
	int add_count = 0;
	int remainder;


	if (arg == 0)
	{
		_putchar('0');
		add_count += 1;
	} else
	{
		while (arg > 0)
		{
			remainder = arg % 16;
			if (arg < 10)
				temp[i++] = 48 + remainder;
			else
				temp[i++] = 55 + remainder;
			arg /= 16;
		}

		while (i > 0)
		{
			_putchar(temp[--i]);
			add_count += 1;
		}
	}

	return (add_count);
}

