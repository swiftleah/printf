#include "main.h"
/**
 * _printf - handles different cases for specifiers
 * @format: char pointer
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
	{
		return (0);
	}

	while (format[i] != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (format[i])
			{
				case 'c':
					 handle_c(args, &count);
					break;
				case 's':
					handle_s(args, &count);
					break;
				case '%':
					handle_percent(&count);
					break;
				case 'b':
					handle_b(args, &count);
					break;
				case 'i':
				case 'd':
					handle_d(args, &count);
					break;
				case 'r':
					handle_r(args, &count);
					break;
				case 'x':
					handle_x(args, &count);
					break;
				case 'X':
					handle_X(args, &count);
					break;
				case 'o':
					handle_o(args, &count);
					break;
				default:
					write(1, "%", 1);
					write(1, format, 1);
					count += 2;
					break;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

