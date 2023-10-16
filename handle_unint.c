#include "main.h"

/**
 * handle_unint - prints unsigned integer to stdout
 * @arg: unsigned integer to be printed
 *
 * Return: 0
 */

int handle_int(unsigned int arg)
{
	char temp[24];
	int i = 0;

	if (arg == 0)
	{
		_putchar('0');
	} else
	{
		while (arg > 0)
		{
			temp[i++] = '0' + (arg % 10);
			arg /= 10;
		}

		while (i > 0)
		{
			_putchar(temp[--i]);
		}
	}

	return (0);
}
