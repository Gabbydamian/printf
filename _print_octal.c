#include "main.h"
/**
 * _print_octal - print octal
 * @x:paramter or member 'x'
 **/
void _print_octal(int x)
{
	unsigned int c = x;

	if (c / 8)
	{
		_print_octal(c / 8);
	}
	_putchar(c % 8 + '0');
}
