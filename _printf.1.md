% _PRINTF(1) _printf 1.0.0
% Damian Gabriel & Itohowo Amissah
% October 2022

# NAME
_printf - produces output according to a specified format

# SYNOPSIS

# DESCRIPTION
The **_printf** function is a custom implementation of the *printf* function, available in the standard i/o header library of the C programming language.
It receives a varying number of parameters and produces output according to a specified format. It returns the count of printed characters when the operation is successful and -1 when the function fails.
The Specifiers checked for are:
- character
- string
- integers
- decimals / integerg
- binary
- unsigned integers
- hexadecimal representation in lowercase and uppercase
- reversed
- Rot13 encryption of a string

# EXIT VALUES
**i**
: count of printed characters

**-1**
: operation failed

# BUGS
Please report any bugs as an issue at <https://github.com/Gabbydamian/printf/issues>

# COPYRIGHT
Copyright @ 2022 _printf
