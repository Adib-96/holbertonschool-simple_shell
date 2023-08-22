#ifndef HEADERFILE
#define HEADERFILE

extern char **environ;

#define RAYEN_ADIB_SAMIR 1

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>


int	execute(char *command[]);
int handel(char *buffer);
char **lsh_split_line(char *line);
int main(void);

#endif
