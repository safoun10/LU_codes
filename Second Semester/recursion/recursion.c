#include <stdio.h>

int func_a();
int func_b();

int func_a()
{
    printf("a\n");
    return func_b();
}

int func_b()
{
    printf("b\n");
    return func_a();
}

int main()
{
    func_a();
    return 0;
}