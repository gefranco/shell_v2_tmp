#include "shell.h"

/**
 * pathdirs - function path.
 * @path: Current path
 * @dirs: Tokenized path
 * Return: If all goes well, return 0.
 */

int pathdirs(char *path, char **dirs)
{
	unsigned int i;
	char *av;

	i = 0;
	av = strtok(path, ":");
	while (av)
	{
		dirs[i] = malloc(_strlen(av) * sizeof(char));
		_strcpy(dirs[i], av);
		av = strtok(NULL, ":");
		i++;
	}
	dirs[i] = 0;
	return (0);
}
