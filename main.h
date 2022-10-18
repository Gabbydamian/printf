#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
void _print_int(int x);
void _print_char(char x);
void _print_string(char x[]);
void _print_binary(int x);
void _print_hex_upp(int x);
void _print_hex_low(int x);
int _putchar(char c);

#endif
