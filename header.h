#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>

int main(void);
char *line_reader(void);
char **line_parser(char *line);
int executing(char **tokens, char *line);
int line_validator(char **tokens);
int semicolon(char *line);
/*  */
void _env(char **commands);
int _cd(char **args);
/*  */
void errors(char __attribute__((unused)) **tokens);
/*  */
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);

extern char **environ;

void sigint_controld(int sigint);

#endif
