#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>

#define SEPARATORS " ,!?\'\"\n\t"

extern char **environ;


int main(void);
void token(char *line, char **tok);
int execute(char *tokens[], char *line);
void path(char *path);
void sigint_handler(int sigint);
int line_validator(char **tokens);
void _env(char **commands);
int _cd(char **args);
void errors(char __attribute__((unused)) **tokens);
int semicolon(char *line);

char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcat(char *dest, char *src);

#endif
