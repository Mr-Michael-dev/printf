#include "main.h"

/**
 * handle_str - prints a string
 * @arg: string to be printed
 *
 * Return: 0
 */

int handle_str(char *arg)
{
	int stringcount = 0;

	while (*arg)
	{
		_putchar(*arg);
		stringcount += 1;
		arg++;
	}

	return (stringcount);
}
