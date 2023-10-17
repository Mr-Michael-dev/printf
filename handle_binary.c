#include "main.h"
/**
 * handle_binary - prints binary to stdout
 * @arg: unsigned integer to be converted to binary
 *
 * Return: count
 */

int handle_binary(unsigned int arg)
{
	int count = 0;

	if (arg == NULL)
	{
		return (-1);
	}

	if (arg == 0)
	{
		_putchar('0');
		return (1);
	}

	while (arg > 0)
	{
		_putchar('0' + (arg & 1));
		count++;
		arg >>= 1;
	}
return (count);
}
