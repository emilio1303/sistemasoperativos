#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    char c;
    char buffer[64];
    unsigned total = 0;
    unsigned index = 0;
    while(read(STDIN_FILENO, &c, 1)!=0){
        if(c!= ' '){
            buffer[index] = c;
            index++;
        }else{
            buffer[index] = '\0';
            total += atoi(buffer);
            index = 0;
        }
    }
    buffer[index] = '\0';
    total += atoi(buffer);

    printf("%u\n", total);
    return 0;
}