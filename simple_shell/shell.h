#ifndef myshell
#define myshell
#include<unistd.h>
#include<sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000

int cmdbld(char *buffer, char *args[]);
int execmd(char *args[], char *av);

char *_getenv(const char *name, char **);
int pathdirs(char *path, char **dirs);

char *fpcmd(char *args[], char **);

int ptrenv(char **);
int _strcmp(char *s1, const char *s2);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

int exblt(char *b);
char *concat(char *buff, char *cmd, char *f);
#endif
