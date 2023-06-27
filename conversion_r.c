#include "main.h"

int handle_r(va_list args, int *count);

void reverse_str(const char *str, int *count)
{
	int i, len;

	if (str == NULL)
	{
		return;
	}

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		putchar(str[i]);
		(*count)++;
	}
}

int handle_r(va_list args, int *count)
{
	char *str = va_arg(args, char *);
	reverse_str(str, count);

	return (*count);
}
