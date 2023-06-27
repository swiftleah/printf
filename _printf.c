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
				default:
					putchar('%');
					putchar(*format);
					count += 2;
					break;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

