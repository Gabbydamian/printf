#include "main.h"
/**
 * _printf - outputs characters according to a specified format
 * @format: constant string
 * Return: length of characters
 */
int _printf(const char *format, ...)
{
	int i = 0;
	char *copy = strdup(format);

	va_list args;

	va_start(args, format);

	while (copy[i])
	{
		if (copy[i] == '%')
		{
			switch (copy[i + 1])
			{
				case 'd':
					_print_int(va_arg(args, int));
					break;
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case 's':
					_print_string(va_arg(args, char*));
					break;
				case '%':
					_putchar('%');
					break;
				case 'i':
					_print_int(va_arg(args, int));
					break;
				case 'b':
					_print_binary(va_arg(args, int));
					break;
				case 'X':
					_print_hex_upp(va_arg(args, int));
					break;
				case 'x':
					_print_hex_low(va_arg(args, int));
					break;
				case 'u':
					_print_un_int(va_arg(args, int));
					break;
				case 'o':
					_print_octal(va_arg(args, int));
					break;
				default:
					putchar(copy[i + 1]);
			}
			i++;
		}
		else if (!(copy[i - 1] == '%'))
			_putchar(copy[i]);
		i++;
	}
	va_end(args);
	return (i);
}
