#include "main.h"

int handle_b(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	int bit, mult, digits = 0;
	unsigned int temp;

	if (n == 0)
	{
		putchar('0');
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
		putchar('0' + bit);
		(*count)++;
		mult >>= 1;
	}
	return (*count);
}
