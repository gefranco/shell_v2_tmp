#include <stdlib.h>
#include <string.h>
#include "shell_v2.h"

/**
 * cmdbld - Tokenize to create separate commands.
 * @buffer: Character array entered by the user.
 * @args : Character array where the command is tokanized.
 * Return: If all goes well, return 0.
 */

int cmdbld(char *command, char *tkcmd[])
{

	char *tk;
	int i;

	i = 0;

	while (command[i])
		i++;

	command[i - 1] = 0;

	i = 0;
	tk = NULL;
	tk = strtok(command, " ");
	while (tk)
	{
		tkcmd[i] = tk;
		tk = strtok(NULL, " ");
		i++;
	}
	tkcmd[i] = NULL;

	return (0);
}
