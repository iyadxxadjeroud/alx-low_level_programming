#include <stdio.h>

/**
 * main - prints number of arguments passed into it.
 * @argc: int
 * @argv: list
 * Return: number, followed by new line
 */

int main(int argc, char const *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
