#include "main.h"

/**
 * handle_s - handles conversion specifier 's'
 * @args: arguments
 * @count: number of characters printed
 * Return: string
 */

int handle_s(va_list args, int count)
{
	int j = 0;
	char *str;

	str = va_arg(args, char *);
		while (str[j] != '\0')
		{
			putchar(str[j]);
			j++;
			count++;
		}
	return (count);
}

