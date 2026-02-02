#include "include/header.h"


void menu(){
  int arg;
  clear();
  printf("      Ultimate toolkit\n");
  printf("\n");
  printf("1.Calculator\n");
  printf("2.Temperature converter\n");
  printf("3.Random number generator\n");
  printf("4.Counter\n");
  printf("5.Display history\n");
  printf("6.Clear history\n");
  printf("7.Exit\n");
  scanf("%d",&arg);
  exec_task(arg);
}