/**
 * Dynamic library share main
 * Usage:
 *  gcc -W -L. -l_prt -o main main.c
 *  cp lib_prt.so /usr/lib/
 */

#include <stdio.h>

void prt(void);

int main(void)
{
    prt();
    return 0;
}
