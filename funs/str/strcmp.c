#include <stdio.h>
#include <string.h>

int main(int argc, char *args[])
{
    const char *cmpstr1 =  "auto";
    const char *cmpstr2 =  "au";
    const char *cmpstr3 =  "u";
    const char *becmpdstr = "auto";
    int pos;
    if (strcmp(cmpstr1, becmpdstr) == 0) {
        printf("%s is in %s!\n", cmpstr1, becmpdstr);
    } else {
        printf("%s is not  in %s!\n", cmpstr1, becmpdstr);
    }
    if ((pos = strcmp(cmpstr2, becmpdstr))) {
        printf("%s is in %s, pos: %d\n", cmpstr2, becmpdstr, pos);
    } else {
        printf("%s is not  in %s!\n", cmpstr2, becmpdstr);
    }
    if (strcmp(cmpstr3, becmpdstr) == 0) {
        printf("%s is in %s!\n", cmpstr3, becmpdstr);
    } else {
        printf("%s is not  in %s!\n", cmpstr3, becmpdstr);
    }
    return 0;
}
