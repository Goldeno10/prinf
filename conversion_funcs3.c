#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
* cvt_S- prints string.
* Non printable characters (0 < ASCII value < 32 or >= 127) are
* printed this way: \x, followed by the ASCII code value in hexadecimal
* (upper case - always 2 characters)
* @ap: stores argument list
* Return: number of characters printed
*/
int cvt_S(va_list ap)
{
	unsigned int i = 0, num_of_char = 0, num;
	unsigned int n = 2;
	char *code, *str = va_arg(ap, char *);

	while (*str != '\0')
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			num_of_char += _puts("\\x");
			num = (int)*str;

			if (num <= 16)
			{
				num_of_char += _putchar('0');
				n = 1;
			}

			code = base_CONVERT(num, 16);
			while (i < n)
			{
				num_of_char += _putchar(code[i]);
				i++;
			}

		}
		else
		{
			num_of_char += _putchar(*str);
		}
		str++;
	}
	return (num_of_char);
}
