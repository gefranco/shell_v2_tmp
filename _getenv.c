#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shell_v2.h"
char *_getenv(const char *name, char **environ)
{
	unsigned int i;


	char *env;
	char *av;
	char *tmp;

	env = NULL;
	i = 0;
	while (environ[i])
	{
		/*tmp = malloc(_strlen(environ[i]) * sizeof(char));
		_strcpy(tmp, environ[i]);*/
		av = strtok(environ[i], "=");
		if (_strcmp(av, name) == 0)
		{
			env = strtok(NULL, "=");
			return (env);
		}
		i++;
	}


	return (env);


}
