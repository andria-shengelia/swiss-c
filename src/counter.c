#include "include/header.h"

void counter(){
  int min,max,answer,arg;
  clear();
  for(int i=0;i<5;i++){
    printf("\n");
  }
  printf("1.Count Up\n");
  printf("2.Count Down\n");
  scanf("%d",&arg);
  for(int i=0;i<5;i++){
    printf("\n");
  }
  if(arg==1){

    printf("Min: ");
    scanf("%d",&min);
    printf("\n");
    printf("Max: ");
    scanf("%d",&max);
    clear();
    for(int i=min;i<=max;i++){
      printf("%d\n",i);
    }
  }
  else if(arg==2){
    printf("Max: ");
    scanf("%d",&max);
    printf("\n");
    printf("Min: ");
    scanf("%d",&min);
    clear();
    for(int i=max;i>=min;i--){
      printf("%d\n",i);
    }
  }
  else{
    menu();
  }
}