#include "main.h"

/**
 * handle_c - handles the 'c' conversion specifier
 * @args: arguments
 *
 * Return: count
 */

int handle_c(va_list args, int count)
{
	putchar(va_arg(args, int));
	count++;

	return (count);
}
