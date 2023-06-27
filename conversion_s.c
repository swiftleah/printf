#include "main.h"

/**
 * handle_s - handles conversion specifier 's'
 * @args: arguments
 * @count: number of characters printed
 * Return: string
 */

void handle_s(va_list args, int *count)
{
	int j = 0;
	char *str;

	if (args == NULL)
	{
		return;
	}
	str = va_arg(args, char *);
		while (str[j] != '\0')
		{
			write(1, &str[j], 1);
			j++;
			(*count)++;
		}
}

