#include "main.h"
/**
 * handle_b - handles conversion specifier 'b'
 * @args: arguments
 * @count: number of characters printed
 *
 * Return: count
 */
int handle_b(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	int bit, mult, digits = 0;
	unsigned int temp;
	unsigned char c;

	if (args == NULL)
	{
		return (-1);
	}
	if (n == 0)
	{
		write(1, "0", 1);
		(*count)++;
		return (1);
	}

	temp = n;
	while (temp != 0)
	{
		temp >>= 1;
		digits++;
	}
	mult = 1;
	while (digits > 1)
	{
		mult <<= 1;
		digits--;
	}
	while (mult > 0)
	{
		bit = (n & mult) ? 1 : 0;
		c = '0' + bit;
		write(1, &c, 1);
		(*count)++;
		mult >>= 1;
	}
	return (*count);
}
