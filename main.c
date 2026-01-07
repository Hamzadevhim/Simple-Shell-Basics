#include <stdio.h>

//loop
//parsing
//command doing

void shell_loop(char**, env)
{
    char* input = NULL;
    size_t input_size = 0;

    char** args;

    while (true)
    {
        getline(&input, &input_size, stdin);

        printf("input: %s", input);
    }
}

int main(int argc, char** argv, char** env)
{
    (void)argc;
    (void)argv;

    shell_loop(env);

    return 0;
}