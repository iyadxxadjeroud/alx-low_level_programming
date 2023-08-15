#include "main.h"

/**
 * print_alphabet - wirte the the lower-case alphabet on a line.
 *
 *
 *
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

