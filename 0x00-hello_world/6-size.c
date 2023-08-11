#include <stdio.h>
/**
  *main - entry point
  *Return: always 0 (success)
  */
int main(void)
{
	printf("The size of a char: %lu byte(s)", sizeof(char));
	printf("The size of an int: %lu byte(s)", sizeof(int));
	printf("The size of a long int: %lu byte(s)", sizeof(long int));
	printf("The size of longlong int: %lu byte(s)", sizeof(long long int));
	printf("The size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
