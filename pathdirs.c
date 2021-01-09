#include <stdlib.h>
#include <string.h>
#include "shell_v2.h"
int pathdirs(char *path, char **dirs)
{
	unsigned int i;
	char *tk;

	i = 0;
	tk = strtok(path, ":");
	while (tk)
	{
		/*dirs[i] = malloc(_strlen(tk) * sizeof(char));
		_strcpy(dirs[i], tk);*/
		dirs[i] = tk;
		tk = strtok(NULL, ":");
		i++;
	}
	dirs[i] = NULL;
	return (0);
}
