#include "main.h"

/**
 * _strpbrk - searches for a set of bytes in a string
 * @s: string to seach from
 * @accept: string to search in s
 * Return: accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == 0)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
