#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

#include "shell_v2.h"
int fndpthcmd(char *cmds[], char **env)
{
	char *path = NULL;
	char *dirs[MAX_ARGS] = {NULL};
	char *cmd = cmds[0];
	struct stat st;
	char pthcmd[MAX_LENGTH_CMD];
	char *dir;
	int i, j, i2, k;
	i = j = i2 = k = 0;
	
	path = _getenv("PATH", env);
	
	pathdirs(path, dirs);

	while (dirs[i2])
	{
		_strcpy(pthcmd,dirs[i2]);
		
		concat(pthcmd, cmd);
		cmds[0] = pthcmd;
		
		if(stat(pthcmd, &st) == 0)
		{
			cmds[0] = pthcmd;
			/*free(dirs[0]);*/
			/*return cmds[0];*/
			return 1;
		}
		
		i2++;
		
		
	}
	return -1;	
}
