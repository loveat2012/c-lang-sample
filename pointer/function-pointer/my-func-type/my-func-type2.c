#include <stdio.h>

typedef void (*my_fun_type)(int);
void hello(int);
my_fun_type my_fun_pointer;

int main(int argc, char *argv[])
{
    my_fun_pointer = &hello;
    (*my_fun_pointer)(10);

    return 0;
}

void hello(int num)
{
    printf("%d\n", num);
}
