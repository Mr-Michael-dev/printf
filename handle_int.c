#include "main.h"

/**
 * handle_int - prints integer to stdout
 * @arg: integer to be printed
 *
 * Return: 0
 */

int handle_int(int arg)
{
	char temp[24];
	int i = 0;
	int int_count = 0;
	if (arg < 0)
	{
		_putchar('-');
		int_count++;
		arg = -arg;
	}

	if (arg == 0)
	{
		_putchar('0');
		int_count++;
	} 
	else
	{
		while (arg > 0)
		{
			temp[i++] = '0' + (arg % 10);
			arg /= 10;
		}

		while (i > 0)
		{
			_putchar(temp[--i]);
			int_count++;
		}
	}

	return (int_count);
}
