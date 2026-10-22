#include <stdio.h>

// The preprocessor replaces GREETING with its text before compilation.
#define GREETING "Hello from a macro!"

int main()
{
    printf("%s\n", GREETING);
    return 0;
}
