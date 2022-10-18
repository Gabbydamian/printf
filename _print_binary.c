#include "main.h"
/**
 * * _print_binary - prints binary
 * * @x:paramater or member 'x'
 **/
void _print_binary(int x)
{
if (x < 0)
{
putchar('-');
x = -x;
}
if (x / 2)
{
_print_binary(x / 2);
}
putchar(x % 2 + '0');
}
