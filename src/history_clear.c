#include "include/header.h"

void history_clear(){

    FILE *file=fopen("log/log.txt","w");

    if(file==NULL){
        clear();
        printf("Error Opening log.txt file");
    }

    fclose(file);

}