#include "main.h"

/**
 * _print_hex_upp - converts an integer to uppercase hexadecimal
 * @x: integer to be converted
 */

void _print_hex_upp(int x)
{
	int rem, i = 0;
	char hexarr[100];

	while (x != 0)
	{
		rem = x % 16;
		if (rem < 10)
			rem += 48;
		else
			rem += 55;
		hexarr[i] = rem;
		i++;
		x = x / 16;
	}
	for (i = (i - 1); i >= 0; i--)
	{
		_putchar(hexarr[i]);
	}
}
