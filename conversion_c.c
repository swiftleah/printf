#include "main.h"

/**
 * handle_c - handles the 'c' conversion specifier
 * @args: arguments
 * @count: number of characters printed
 * Return: count
 */

void handle_c(va_list args, int *count)
{
	char c;

	if (args == NULL)
	{
		return;
	}
	c = (char)(va_arg(args, int));
	write(1, &c, 1);
	(*count)++;
}
