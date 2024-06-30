#include <stdio.h>

/**
 * _strlen - find the length of the string
 *@s: sring that will be checked it len
 *Return: the len of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
