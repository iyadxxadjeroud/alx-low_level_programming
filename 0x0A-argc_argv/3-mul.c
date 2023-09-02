#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of 2 arguments
 * @argc: number of command line arguments.
 * @argv: pointer to a list.
 * Return: result if 3 arguments, ERROR if no 3.
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
	return (0);
}
