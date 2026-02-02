#include "include/header.h"

void done_menu(){
  int nav;
  for(int i=0;i<5;i++){
    printf("\n");
  }

  printf("1.Go Back to Menu\n");
  printf("2.Exit");
  scanf("%d",&nav);
  if(nav==1){
    clear();
    menu();
  }
  else{
    clear();
    for(int i=0;i<5;i++){
    printf("\n");
    }
    printf("Goodbye!!\n");
    for(int i=0;i<5;i++){
    printf("\n");
    }

  }

}