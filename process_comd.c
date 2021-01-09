#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell_v2.h"
void process_cmd(int glr, char **command, char **args, char **env)
{
	int status, res;
	pid_t pid_c;
	char *tkcmds[MAX_ARGS];
	char pthcmd[MAX_LENGTH_CMD];

	tkcmds[MAX_ARGS - 1] = NULL;
	if (glr == EOF || exblt(*command))
        {
                free(*command);
                exit(EXIT_SUCCESS);
        }
        pid_c = fork();
        if (pid_c > 0) /*father*/
        {
                pid_c = wait(&status);
        }
        else if (pid_c == 0)
        {
		/*int i = 0;*/
                cmdbld(*command, tkcmds);
		_strcpy(pthcmd, tkcmds[0]);
		
		if (_strcmp(pthcmd, "env") == 0)
		{
			ptrenv(env);
			free(*command);
			exit(EXIT_SUCCESS);
		}		
		else if (fndpthcmd(tkcmds, env) == -1)
               	{
			perror(args[0]);
			/*return (EXIT_FAILURE);*/
			free(*command);
			exit(EXIT_FAILURE);
		}
		res = EXIT_SUCCESS;
		res = execcmd(tkcmds,args[0]);
		 /*exit(execmd(args????, av[0]));
                */
		free(*command);
		exit(res);
        }
}
