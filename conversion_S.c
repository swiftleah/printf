#include "main.h"
/**
 * handle_S - handles conversion specifier 'S'
 * @args: arguments
 * @count: number of characters printed
 *
 * Return: count
 */

int handle_S(va_list args, int *count)
{
	char *str = va_arg(args, char *);
	int i = 0;
	char hex[3];
	unsigned char ch;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			write(1, &str[i], 1);
			(*count)++;
		}
		else
		{
			write(1, "\\x", 2);

			ch = (unsigned char)str[i];
			hex[0] = "0123456789ABCDEF"[ch / 16];
			hex[1] = "0123456789ABCDEF"[ch % 16];
			write(1, hex, 2);
			(*count) += 4;
		}
		i++;
	}
	return (*count);
}
