#include "main.h"

/**
 * handle_str - prints a string
 * @arg: string to be printed
 *
 * Return: 0
 */

int handle_str(char *arg)
{
	while (*arg)
	{
		_putchar(*arg);
		arg++;
	}

	return (0);
}
