#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    unsigned pid = fork();
    if(pid == 0) {
        printf("Soy el proceso hijo\n");
        char *newargv[] = { NULL };
        char *newenviron[] = { NULL };
        newargv[0] = argv[1];
        execve(argv[1],&argv[1],newenviron);
    } else {
        int status;
        printf("Soy el proceso padre y mi hijo es: %u\n", pid);
        wait(&status);
        printf("Terminando después del hijo y estatus %d\n", status);
    }
    printf("Hola mundo\n");
    return 0;
}