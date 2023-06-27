#include "main.h"
int handle_X(va_list args, int *count);
int handle_p(va_list args, int *count);
void print_hex(int digit, int *count);

/**
 * handle_x - handles conversion specifier 'x'
 * @args: arguments
 * @count: number of characters printed
 *
 * Return: count
 */
int handle_x(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	int digits = 0;
	int remainder, j, i;
	unsigned int temp;
	char *buffer;

	if (args == NULL)
	{
		return (-1);
	}
	if (n == 0)
	{
		write(1, "0", 1);
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
		write(1, &buffer[j], 1);
		(*count)++;
	}
	return (*count);
}

/**
 * handle_X - handles conversion specifier 'X'
 * @args: arguments
 * @count: number of characters printed
 *
 * Return: count
 */

int handle_X(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	int digits = 0;
	int i, remainder, j;
	char *buffer;
	unsigned int temp;

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
			buffer[i] = 'A' + (remainder - 10);
		n /= 16;
		i--;
	}
	for (j = 0; j < digits; j++)
	{
		write(1, &buffer[j], 1);
		(*count)++;
	}
	return (*count);
}
/**
 * print_hex - prints hexadecimal version of int
 * @digit: digit
 * @count: number of characters printed
 *
 * Return: nothing
 */

void print_hex(int digit, int *count)
{
	if (digit < 10)
	{
		char c = '0' + digit;
		write(1, &c, 1);
		(*count)++;
	}
	else
	{
		char c = 'a' + (digit - 10);
		write(1, &c, 1);
		(*count)++;
	}
}

/**
 * handle_p - handles conversion specifier 'p'
 * @args: arguments
 * @count: number of characters printed
 *
 * Return: count
 */

int handle_p(va_list args, int *count)
{
	void *ptr = va_arg(args, void *);
	unsigned int value = (unsigned int)ptr;
	int i = 0;
	int remaining;
	char buffer[20];

	while (value != 0)
	{
		remaining = value % 16;
		buffer[i] = remaining;
		value/= 16;
		i++;
	}

	if (i == 0)
	{
		write(1, "0", 1);
		(*count)++;
	}
	else
	{
		while (i > 0)
		{
			i--;
			print_hex(buffer[i], count);
		}
	}
	return (*count);
}
}
