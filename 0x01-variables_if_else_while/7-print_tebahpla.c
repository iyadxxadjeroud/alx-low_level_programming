#include <stdio.h>

/**
 * main - Print the lowercase alphabet in reverse
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
