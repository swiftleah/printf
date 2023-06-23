#include "main.h"

/**
 * handle_u - handles conversion specifier '%u'
 *
 * Return: unsigned int
 */

int handle_u(va_list args)
{
	int digit;
	unsigned int i;
	unsigned int div = 1;
	unsigned int quotient;
	int count = 0;

	i = va_arg(args, unsigned int);

	while (quotient >= 10)
	{
		div *= 10;
		quotient /= 10;
	}

	do
	{
		digit = i / div;
		putchar('0' + digit);
		count++;
		i %= div;
		div /= 10;
	} while (div > 0);

	return (count);
}
