#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main(int argc, char *argv[])
{

    /*signal(SIGINT, SIG_DFL);*/
    signal(SIGINT, SIG_IGN); // exit by use `CTRL+\`

    for (;;) {
        sleep(1);
        printf("1\n");
    }
    return 0;
}
