#include "main.h"

int handle_x(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	int digits = 0;
	int remainder, j, i, temp;
	char *buffer;

	if (args == NULL)
	{
		return (-1);
	}
	if (n == 0)
	{
		putchar('0');
		(*count)++;
		return (*count);
	}
	while (temp != 0)
	{
		digits++;
		temp /= 16;
	}
	buffer = (char *)malloc(digits * sizeof(char));
	if (buffer == NULL)
	{
		return (*count);
	}

	i = digits - 1;

	while (n != 0)
	{
		remainder = n % 16;
		if (remainder < 10)
			buffer[i] = '0' + remainder;
		else
			buffer[i] = 'a' + (remainder - 10);
		n /= 16;
		i--;
	}

	for (j = 0; j < digits; j++)
	{
		putchar(buffer[j]);
		(*count)++;
	}
	free(buffer);
	return (*count);
}