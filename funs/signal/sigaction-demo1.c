#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>

#define PROMPT "Do you really want to break off the program ?"
char *prompt = PROMPT;
void ctrl_c_op(int signo)
{
    write(STDERR_FILENO, prompt, strlen(prompt));
}

int main()
{
    struct sigaction act;
    act.sa_handler = &ctrl_c_op;
    sigemptyset(&act.sa_mask);
    act.sa_flags = 0;

    if (sigaction(SIGINT, &act, NULL) < 0) {
        fprintf(stderr, "Install Signal Action Error：%s\n\a", strerror(errno));
        exit(1);
    }

    while(1);

    return 0;
}
