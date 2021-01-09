#include "shell.h"

/**
 * _strlen - length of a string.
 * @s :the pointer to a char variable
 * Return: length of string
 */

int _strlen(char *s)
{
	char c;
	int i;

	i = 0;
	while ((c = *(s++)) != '\0')
		i++;
	return (i);
}
