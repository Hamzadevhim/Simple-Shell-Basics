#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include "utils.h"

int main()
{
    char *line = NULL;
    size_t size = 0;

    printf("HAMZASHELL> ");

    getline(&line, &size, stdin);
    line[strcspn(line, "\n")] = '\0';
    char *argv[] = {line, NULL};
    
    execvp(argv[0], argv);
}