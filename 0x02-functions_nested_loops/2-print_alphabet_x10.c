#include "main.h"

/**
 *print_alphabet_x10 - function that will print alphabet in 10 lines
 */
void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
