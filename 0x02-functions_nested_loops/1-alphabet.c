#include "main.h"
/**
 * main - print alphabet.
 *
 *
 *print_alphabet: write the lowercase alphabet on a line.
 *
 *
 *Return: always 0 (Success)
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

