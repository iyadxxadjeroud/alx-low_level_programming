#include "main.h"

/**
 * _isalpha - check if the given character is lower case.
 * @c: character to test.
 *
 * Return: 1 (True) else 0 (False)
 *
 *
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122))
		return (1);
	if ((c >= 65 && c <= 90))
		return (1);
	return (0);
}

