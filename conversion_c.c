#include "main.h"

/**
 * handle_c - handles the 'c' conversion specifier
 * @args: arguments
 * @count: number of characters printed
 * Return: count
 */

void handle_c(va_list args, int *count)
{
	putchar(va_arg(args, int));
	(*count)++;
}
