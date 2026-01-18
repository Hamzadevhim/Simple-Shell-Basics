#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *line = NULL;
    size_t size = 0;
    size_t userInput;

    printf("HAMZASHELL> ");

    while(1)
    {
        userInput = getline(&line, &size, stdin);
        printf("%ld",userInput);
    }
}