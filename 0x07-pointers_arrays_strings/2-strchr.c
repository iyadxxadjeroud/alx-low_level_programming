#include "main.h"

/**
 * *_strchr - locate a character in a string
 * @s: string
 * @c: the character
 * Return: pointer to first occurrence of c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0' ; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}
	return ('\0');
}
