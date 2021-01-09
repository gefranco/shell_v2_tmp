#ifndef SHELL_V2
#define SHELL_V2
#define MAX_ARGS 100
#define MAX_LENGTH_CMD 1024
int readcommand(char **);
void process_cmd(int, char **, char **, char**);
int cmdbld(char *buffer, char *args[]);
char *_getenv(const char *name, char **environ);
int _strlen(char *s);
int fndpthcmd(char *cmds[], char **env);
void _strcpy(char *dest, char *src);
int pathdirs(char *path, char **dirs);
int _strlen(char *s);
int _strcmp(char *s1, const char *s2);
char *concat(char *s, char *cmd);
int execcmd(char *args[], char *av);
void free_arr(char *arr[]);
int ptrenv(char **environ);
int exblt(char *b);
#endif
