#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    char c;
    char buffer[64];
    unsigned index = 0;
    unsigned caracteres = 0;
    unsigned palabras = 0;
    unsigned lineas = 0;
    while(read(STDIN_FILENO, &c, 1)!=0){

        if(c!= ' ' && c!='\n'){
            buffer[index] = c;
            index++;
            caracteres++;
        }else if(c==' '){
            buffer[index] = '\0';
            palabras++;
            index = 0;
        }else if(c== '\n'){
            buffer[index] = '\0';
            lineas++;
            index=0;
        }
    }
    
    
    palabras++;
    buffer[index] = '\0';
   
    

    printf("lineas: %d \n", lineas);
    printf("palabras: %d \n", palabras);
    printf("caracteres: %d \n", caracteres);
    return 0;
}