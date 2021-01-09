#include <stdio.h>
#include "shell_v2.h"
int readcommand(char **buf)
{	
        size_t max = 0;
        /*while((gl = getline(&buf,&max, stdin)) != -1)
        {
		process_cmd(gl, &buf);
        }*/
	
	return getline(buf, &max, stdin);

}
