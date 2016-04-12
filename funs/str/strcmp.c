#include <stdio.h>
#include <string.h>

int main(int argc, char *args[])
{
    const char *cmpstr =  "a";
    const char *becmpdstr = "auto";
    if (strcmp(cmpstr, becmpdstr)) {
        printf("%s is in %s!\n", cmpstr, becmpdstr);
    } else {
        printf("%s is not  in %s!\n", cmpstr, becmpdstr);
    }
    return 0;
}
