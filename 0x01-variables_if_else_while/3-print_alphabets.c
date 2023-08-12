#include <stdio.h>

/**
 * main - entry point
 * Description: print all alphabet:
 * in lowercase
 * then in uppercase
 *Return: always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALP[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(ALP[i]);
	}
	putchar('\n');
	return (0);
}
