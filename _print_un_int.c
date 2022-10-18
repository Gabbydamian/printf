#include "main.h"
/**
 * _print_un_int - print unsigned int
 * @x:parameter or member 'x'
 **/
void _print_un_int(int x)
{
	unsigned int c = x;

	if (c / 10)
	{
		_print_un_int(c / 10);
	}
	_putchar(c % 10 + '0');
}
