#include "main.h"
/**
 * * _print_string - prints string
 * * @x:paramater or member 'x'
 **/
void _print_string(char x[])
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		_putchar(x[i]);
	}
}
