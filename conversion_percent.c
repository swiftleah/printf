#include "main.h"

/**
 * handle_percent - handles conversion specifier for '%'
 * @count: number of chcracters printed
 * Return: nothing
 */

void handle_percent(int *count)
{
	write(1, "%", 1);
	(*count)++;
}

