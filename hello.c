#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    (void)argc; (void)argv;
    if(printf("Hello, World!\n") < 0){
        perror("printf");
        exit(EXIT_FAILURE);
    }
    return EXIT_SUCCESS;
}