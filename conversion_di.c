#include "main.h"
/**
 * handle_d - handles conversion specifiers d and i
 * @args: arguments
 * @count: number of charaters printed
 * Return: count
 */
int handle_d(va_list args, int *count)
{
	int num = va_arg(args, int);
	int temp, digit, mult = 1, digits = 0;
	char c;

	if (args == NULL)
	{
		return (-1);
	}
	if (num == 0)
	{
		write(1, "0", 1);
		(*count)++;
		return (1);
	}
	temp = num;
	if (num < 0)
	{
		write(1, "-", 1);
		(*count)++;
		num = -num;
		temp = -temp;
	}
	while (temp != 0)
	{
		temp /= 10;
		digits++;
	}
	mult = 1;
	while (digits > 1)
	{
		mult *= 10;
		digits--;
	}
	while (mult > 0)
	{
		digit = num / mult;
		c = '0' + digit;
		write(1, &c, 1);
		(*count)++;
		num %= mult;
		mult /= 10;
	}
	return (*count);
}
