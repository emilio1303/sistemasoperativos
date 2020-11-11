#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

int main(){
    int fd = open("./lee.c", O_RDONLY, 0);
    if(fd < 0){
        printf("Error al abrir el archivo \n");
        return 1;
    }

    char c;
    while(read(fd, &c, 1)){
        printf("%c", c);
    }
    
    return 0;
}