#include "main.h"
#define NULL 0

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to search for
 * Description: retruns first occurrence in a string
 * Return: pointer to first instance of string
 **/

char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				s = &s[x];
				return (s);
			}
		}
		x++;
	}
	return (NULL);
}
