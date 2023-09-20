#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <stdbool.h>
#include <ctype.h>

#define BUFFER_SIZE 1024

extern char **environ;
void getinput(char *str);
int _strlen(const char *s);
int _strncmp(const char *s1, const char *s2, size_t n);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_memset(char *s, char b, unsigned int n);
char *_which(char *fname);
char **tokenize(char *str, char *delim);
char *_getenv(const char *name);
char *_strcpy(char *dest, char *src);
void input(char *string);
void built_exit(char **args);

#endif
