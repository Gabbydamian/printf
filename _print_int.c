#include "main.h"
/**
 * * _print_int - prints int
 * * @x:paramater or member 'x'
 **/
void _print_int(int x)
{
	if (x < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x / 10)
	{
		_print_int(x / 10);
	}
	_putchar(x % 10 + '0');
}
