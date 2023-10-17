#include "main.h"

/**
 * handle_unint_octal - converts unsigned integer to octal and print to stdout
 * @arg: unsigned integer to be printed
 *
 * Return: 0
 */

int handle_unint_octal(unsigned int arg)
{
	char temp[24];
	int i = 0;
	int octal_count = 0;

	if (arg == 0)
	{
		_putchar('0');
		octal_count += 1;
	} else
	{
		while (arg > 0)
		{
			temp[i++] = '0' + (arg % 8);
			arg /= 8;
		}

		while (i > 0)
		{
			_putchar(temp[--i]);
			octal_count += 1;
		}
	}

	return (octal_count);
}
