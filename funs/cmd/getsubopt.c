// Usage:
//   getsubopt -a -b one,two=123

#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

int main(int argc, char *argv[]) {
    int ch, i;
    char *options, *value;
    char *keylistp[] = {
#define ONE     0
            "one",
#define TWO     1
            "two",
            NULL
    };
    while ((ch = getopt(argc, argv, "ab:")) != -1) {
        switch (ch) {
            case 'a':
                printf("has a argument.\n");
                break;
            case 'b':
                options = optarg;
                while (*options) {
                    switch (getsubopt(&options, keylistp, &value)) {
                        case ONE:
                            printf("b argument has `ONE` sub option.\n");
                            break;
                        case TWO:
                            if (!value) {
                                fprintf(stderr, "no value for two\n");
                                exit(1);
                            }
                            i = atoi(value);
                            printf("%d\n", i);
                            break;
                        case -1:
                            if (suboptarg) {
                                fprintf(stderr, "illegal sub option %s\n", suboptarg);
                            } else {
                                fprintf(stderr, "missing sub option\n");
                            }
                            break;
                    }
                }
                break;
        }

    }

    return 0;
}
