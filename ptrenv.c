#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * ptrenv - Print to enviroment in the variable.
 * @environ: pointer to enviroment.
 * Return: Return always 0.
 */

int ptrenv(char **environ)
{
	unsigned int i;

	i = 0;
	while (environ[i])
	{
		write(1, environ[i], strlen(environ[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);

}
