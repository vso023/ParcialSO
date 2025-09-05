#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Uso: %s <n1> [n2] [n3] ...\n", argv[0]);
        return 2; 
    }
    long long acc = 0; 
    for (int i = 1; i < argc; ++i) {
        char *end = NULL;
        errno = 0;
        long val = strtol(argv[i], &end, 10);
        if (errno !=0 || end == argv[i] || *end != '\0') {
            fprintf(stderr, "Argumento invalido: '%s'\n", argv[i]);
            return 3; 
        }
        acc += val;
    }

    printf("%lld\n", acc);
    return 0;
}
