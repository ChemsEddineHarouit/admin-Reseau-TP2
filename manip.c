#include "stdio.h"
#include "stdlib.h"

void affichage(char * buffer, int length){
    printf("\n|");
    for (int i = 0; i < length; i+=2){
        if(i%16==0 && i!=0){
            printf("|\n|");
        }
        else if(i!=0)
        {
            printf("  ");
        }
        
        printf("%02x%02x",buffer[i], buffer[i+1]);
    }
    printf("|\n\n");
}