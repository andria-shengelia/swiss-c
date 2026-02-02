#include "include/header.h"

void temperature(){
  int arg;
  float t;
  float answer;
  for(int i=0;i<5;i++){
    printf("\n");
  }
  printf("1.°C->°F\n");
  printf("2.°F->°C\n");
    for(int i=0;i<5;i++){
    printf("\n");
  }
  scanf("%d",&arg);

  if(arg==1){
    for(int i=0;i<5;i++){
    printf("\n");
    }
    printf("°C: ");
    scanf("%f",&t);
    printf("\n");
    for(int i=0;i<5;i++){
    printf("\n");
    }
    answer=(t*1.8);
    clear();
    for(int i=0;i<5;i++){
      printf("\n");
    }
    printf("Answer: %g°F \n",answer);
    for(int i=0;i<5;i++){
      printf("\n");
    }

  }
  else if(arg==2){
    for(int i=0;i<5;i++){
    printf("\n");
    }
    printf("°F: ");
    scanf("%f",&t);
    printf("\n");
    for(int i=0;i<5;i++){
    printf("\n");
    }
    answer=(t-32)/1.8;
    clear();
    for(int i=0;i<5;i++){
      printf("\n");
    }
    printf("Answer: %g°C \n",answer);
    for(int i=0;i<5;i++){
      printf("\n");
    }
  }
  else{
    clear();
    menu();
  }
}