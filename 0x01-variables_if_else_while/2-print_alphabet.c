#include <stdio.h>

/** main - Entry point*/
/* Description: print the alphabet in lowercase*/
/* Return: always 0 (success)*/
int main(void)
{
	char alphabet = 'a';
	int i;

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
