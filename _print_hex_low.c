#include "main.h"

/**
 * _print_hex_low - converts an integer to lowercase hexadecimal
 * @x: integer to be converted
 */

void _print_hex_low(int x)
{
	int rem, i = 0;
	char hexarr[100];

	while (x != 0)
	{
		rem = x % 16;

		if (rem < 10)
			rem += 48;
		else
			rem += 87;
		hexarr[i] = rem;
		i++;
		x = x / 16;
	}
	for (i = (i - 1); i >= 0; i--)
	{
		_putchar(hexarr[i]);
	}
}
