#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "shell.h"

/**
 * fpcmd - File Path Command.
 * @args: Token of the argument.
 * @env: Enviroment fot tokenized.
 * Return: Return Argument String in posision 0.
 */

char *fpcmd(char *args[], char **env)
{
	char *path = _getenv("PATH", env);
	char *d[1024] = {0};
	char *cmd = args[0];
	char *buff;
	struct stat st;
	char *f;

	int i = 0;
	int j = 0;
	int i2 = 0;

	if (_strcmp(cmd, "env") == 0)
	{
		ptrenv(env);
		return (NULL);
	}
	pathdirs(path, d);
	while (cmd[i])
		i++;

	while (d[i2])
	{
		buff = d[i2];
		j = 0;
		while (buff[j])
			j++;
		f = malloc(i + j + 1 * sizeof(char));
		concat(buff, cmd, f);
		if (stat(f, &st) == 0)
			args[0] = f;
		else
		{
		}
		i2++;
	}
	return (args[0]);
}
