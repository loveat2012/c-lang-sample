#include <stdio.h>

void my_fun1(int x); 
void my_fun2(int x); 
void my_fun3(int x); 
typedef void (*my_fun_type)(int ); // ②. 定义一个函数指针类型my_fun_type,与①函数类型一至
void call_my_fun(my_fun_type fp,int x);

int main(int argc, char* argv[])
{
    call_my_fun(my_fun1,10); // ⑤. 通过call_my_fun函数分别调用三个不同的函数
    call_my_fun(my_fun2,20); 
    call_my_fun(my_fun3,30); 
}
void call_my_fun(my_fun_type fp,int x) // ③. 参数fp的类型是my_fun_type。
{
    fp(x); // ④. 通过fp的指针执行传递进来的函数，注意fp所指的函数是有一个参数的
}
void my_fun1(int x) // ①. 这是个有一个参数的函数，以下两个函数也相同
{
    printf("函数my_fun1中输出：%d\n",x);
}
void my_fun2(int x) 
{
    printf("函数my_fun2中输出：%d\n",x);
}
void my_fun3(int x) 
{
    printf("函数my_fun3中输出：%d\n",x);
}
