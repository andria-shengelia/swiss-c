#include "include/header.h"


void menu(){
  int arg;
  printf("      Ultimate toolkit\n");
  printf("\n");
  printf("1.Calculator\n");
  printf("2.Temperature converter\n");
  printf("3.Random number generator\n");
  printf("4.Counter\n");
  printf("5.Exit\n");
  scanf("%d",&arg);
  exec_task(arg);
}