#include "main.h"

int handle_r(va_list args, int *count);
/**
 * reverse_str - reverses specified string
 * @str: str to reverse
 * @count: number of characters printed
 *
 * Return: count
 */
void reverse_str(const char *str, int *count)
{
	int i, len;

	if (str == NULL)
	{
		return;
	}

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		write(1, &str[i], 1);
		(*count)++;
	}
}
/**
 * handle_r - handles conversion specifier 'r'
 * @args: arguments
 * @count: number of characters printed
 *
 * Return: count
 */
int handle_r(va_list args, int *count)
{
	char *str = va_arg(args, char *);

	reverse_str(str, count);

	return (*count);
}
