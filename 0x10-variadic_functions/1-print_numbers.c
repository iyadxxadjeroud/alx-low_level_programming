#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @seperator: the string seperator
 * @n: number of arg
 * @...: the integers to print
 *
 * return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int);
			i ? (separator ? separator : "") : "\n";
	va_end(ap);
}
