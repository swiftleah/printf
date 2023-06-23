#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	int count = 0;
	char *str;
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
					count += handle_c(args);
					break;
				case 's':
					{
						str = va_arg(args, char *);
						while (str[j] != '\0')
						{
							putchar(str[j]);
							count++;
							j++;
						}
					}
					break;
				case '%':
					putchar('%');
					count++;
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

