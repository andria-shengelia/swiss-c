#include "include/header.h"

void history_display(){
    clear();
    FILE *file=fopen("log/log.txt","r");
    char character;

    if(file==NULL){
        clear();
        printf("Error Opening log.txt file");
    }
    for(int i =0;i<5;i++){
        printf("\n");
    }
    while ((character = fgetc(file)) != EOF) {
        printf("%c", character); // Print the character to the console
    }
    for(int i =0;i<5;i++){
        printf("\n");
    }
    fclose(file);
}