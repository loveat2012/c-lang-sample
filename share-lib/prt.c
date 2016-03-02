/**
 * Dynamic library share main
 * Usage:
 *  gcc -shared -fPIC -o lib_prt.so prt.c
 */

#include <stdio.h>

void prt(void)
{
    printf("You found me!!!\n");
}
