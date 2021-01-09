#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * execmd - Execute the command.
 * @args: Character array where the command is tokanized.
 * @av: shell name
 * Return: If all goes well, return 0.
 */

int execcmd(char *args[], char *av)
{

	struct stat st;

	/*if (stat(args[0], &st) != 0)
	{
		perror(av);
		return (EXIT_FAILURE);
	}*/
	if (execve(args[0], args, NULL) == -1)
	{

		perror("Error");
		return (-1);

	}

	return (0);

}
