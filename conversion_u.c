#include "main.h"
/**
 * handle_u - handles conversion specifier 'u'
 * @args: arguments
 * @count: number of characters printed
 *
 * Return: count
 */

int handle_u(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	int digits = 0;
	unsigned int temp;
	char *buffer;
	int i, j;

	if (n == 0)
	{
		write(1, "0", 1);
		(*count)++;
		return (*count);
	}

	temp = n;
	while (temp != 0)
	{
		digits++;
		temp /= 10;
	}

	buffer = (char *)malloc(digits * sizeof(char));
	if (buffer == NULL)
	{
		return (*count);
	}
	i = digits - 1;
	while (n != 0)
	{
		buffer[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	for (j = 0; j < digits; j++)
	{
		write(1, &buffer[j], 1);
		(*count)++;
	}
	return (*count);
}
