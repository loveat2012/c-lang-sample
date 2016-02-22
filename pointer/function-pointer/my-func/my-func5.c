#include <stdio.h>

void my_fun(int x); // 这个申明也可写成：void my_fun(int);
void (*my_fun_pointer)(int); // 也可申明成void(*my_fun_pointer)(int x)，但习惯上一般不这样。

int main(int argc, char* argv[])
{
    (*my_fun)(10); // 这是直接调用my_fun函数
    my_fun_pointer = &my_fun; // 将my_fun函数的地址赋给my_fun_pointer变量
    (*my_fun_pointer)(20); // 这是通过函数指针变量my_fun_pointer来调用my_fun函数的。
    return 0;
}

void my_fun(int x) // 这里定义一个my_fun函数
{
    printf("%d\n", x);
}
