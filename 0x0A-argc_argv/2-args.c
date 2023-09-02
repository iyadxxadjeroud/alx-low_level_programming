#include <stdio.h>

/**
 * main - prints all arguments passed into it.
 * @argc: int
 * @argv: list
 * Return: argument, followed by new line
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{	
	printf("%s\n", argv[i]);
	i++;
	}

	return (0);
}
