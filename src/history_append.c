#include "include/header.h"

void history_append(char log[]){
    time_t current_time;

    time(&current_time);

    FILE *file = fopen("log/log.txt","a");

    if (file==NULL){
        clear();
        printf("Error Opening log.txt file");
    }
    
    fprintf(file,"%s time: %s\n",log,ctime(&current_time));
    fclose(file);
}