#include "shell.h"

/**
 * cmdbld - Tokanize to create separate commands.
 * @buffer: Character array entered by the user.
 * @args : Character array where the command is tokanizeyd.
 * Return: If all goes well, return 0.
 */

int cmdbld(char *buffer, char *args[])
{

	char *av;
	int i;

	i = 0;

	while (buffer[i])
		i++;

	buffer[i - 1] = 0;

	i = 0;
	av = NULL;
	av = strtok(buffer, " ");
	while (av)
	{
		args[i] = av;
		av = strtok(NULL, " ");
		i++;
	}
	args[i] = NULL;

	return (0);
}
