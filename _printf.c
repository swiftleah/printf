#include "main.h"

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
					 handle_c(args);
					break;
				case 's':
					handle_s(args);
					break;
				case '%':
					handle_percent();
					break;
				case 'u':
					break;
				case 'i':
				case 'd':
					break;
				default:
					putchar('%');
					putchar(*format);
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

