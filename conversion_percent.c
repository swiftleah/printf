#include "main.h"

/**
 * handle_percent - handles conversion specifier for '%'
 *
 * Return: nothing
 */

void handle_percent(int *count)
{
	putchar('%');
	(*count)++;
}
