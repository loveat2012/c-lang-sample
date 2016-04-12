#include <stdio.h>
#include <string.h>

int main(int argc, char *args[])
{
    const char *src_str = "Hello World!\n";
    char *dst_str;
    dst_str = strdup(src_str);
    printf("%s", dst_str);
    return 0;
}
