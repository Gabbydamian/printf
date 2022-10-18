#include "main.h"
/**
 * * _print_binary - prints binary
 * * @c:paramater or member 'c'
 **/
void _print_binary(int c)
{
	unsigned int x = c;

	if (x / 2)
	{
		_print_binary(x / 2);
	}
	putchar(x % 2 + '0');
}
