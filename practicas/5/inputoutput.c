#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(){

    char c;
    while(read(STDIN_FILENO,&c,1) !=0){
        write(STDOUT_FILENO,&c,1);
    }
    return 0;
   


    /*char name [250];
    scanf("%s",name);
    printf("el contenido es : %s\n", name);*/
}