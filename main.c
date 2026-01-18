#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *line = NULL;
    size_t size = 0;

    printf("HAMZASHELL> ");

    while(1)
    {
        getline(&line, &size, stdin);
        printf("%s", line);
    }
}