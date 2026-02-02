#include "include/header.h"

void exec_task(int arg){
  switch (arg) {
    case 1:
      clear();
      printf("\n");
      calculator();
    break;
    case 2:
      clear();
      temperature();
    break;
    case 3:
      clear();
      random_num();
    break;
    case 4:
      counter();
    break;
    case 5:
      printf("Thanks for using me see you soon :)\n");
    break;
    default:
    break;

  }
}