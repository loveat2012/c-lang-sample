#include <stdio.h>

void my_fun(int x); // 此处的申明也可写成：void my_fun( int );
typedef void (*my_fun_type)(int ); // 这样只是定义一个函数指针类型
my_fun_type my_fun_pointer; // 然后用my_fun_type类型来申明全局my_fun_pointer变量

int main(int argc, char* argv[])
{
    // my_fun_type my_fun_pointer;
    // 函数指针变量当然也是可以是局部的 ，那就请在这里申明了。 
    my_fun(10); 
    my_fun_pointer=&my_fun; 
    (*my_fun_pointer)(20); 
    return 0;
}

void my_fun(int x) 
{
    printf("%d\n", x);
}
