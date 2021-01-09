#include "shell.h"
/**
 * main - Entry to launch program.
 * @ac: Count to argument.
 * @av: List of argument to main.
 * @env: Pointer to enviroment.
 * Return: If all goes well, return 0.
 */
int main(int ac, char **av, char **env)
{
	int status;
	pid_t pid_c;
	int glr;
	char *buffer;
	char *args[MAX];
	size_t max = 0;

	(void)ac;

	do {
		/*write(1, "$ ", 2);*/
		glr = getline(&buffer, &max, stdin);
		if (glr == EOF || exblt(buffer))
		{
			free(buffer);
			exit(0);
		}
		pid_c = fork();
		if (pid_c > 0) /*father*/
		{
			pid_c = wait(&status);
			continue;
		}
		else if (pid_c == 0)
		{
			cmdbld(buffer, args);
			if (fpcmd(args, env) == NULL)
				exit(0);
			exit(execmd(args, av[0]));
		}

	} while (glr > 0);
	return (0);
}
