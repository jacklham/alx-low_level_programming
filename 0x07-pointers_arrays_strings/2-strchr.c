#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: iterates over the character
 * @c: character to search
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}