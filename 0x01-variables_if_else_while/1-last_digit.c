#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: print the value of n status:
 * greater then, is zero and is less than 6.
 *Return: always 0 (Success)
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (digit > 5)
	{
		printf("Last digit of %i and %i is greater than 5\n", n, n % 10);
	}
	else if (digit < 6 && (n % 10) != 0)
	{
		printf("Last digit of %i and %i is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %i is %i and is 0\n", n, n % 10);
	}
	return (0);
}
