#include <stdio.h>
#include <stdlib.h>
#include "shell_v2.h"
int main(int ac, char **argsv, char **env)
{
	int res = 0;
        char *buf = NULL;
	while((res=readcommand(&buf))!= -1)
	{
		process_cmd(res, &buf, argsv, env);
		free(buf);
	}	
	return 0;
}
