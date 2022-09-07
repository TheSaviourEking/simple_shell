#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>


void print_environment(void);
int _strcmp(char* s1, char* s2);
char** parse_input(char* buffer);
char* _strchr(char* s, char c);
char* path_search(char* cmd);
char* _strcat(char* dest, char* src);
char* _strncat(char* dest, char* src, int n);
int string_length(char* pointer);



#endif
