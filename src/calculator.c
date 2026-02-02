#include "include/header.h"

void calculator(){
  float num1,num2,answer;
  char calc_arg;
  char log[100];
  for(int i=0;i<5;i++){
    printf("\n");
  }
  printf("Calculator Ready For Work!!!\n");
  printf("\n");
  printf("Enter Your First Number: ");
  scanf("%f",&num1);
  printf("\n");
  printf("Enter your Second Number: ");
  scanf("%f",&num2);
  printf("\n");
  printf("Whats The Type Of Equation You Want?(+,-,*,/,%)");
  scanf(" %c",&calc_arg);
  printf("\n");
  
  switch (calc_arg) {
    case '+':
      answer=num1+num2;
    break;
    case '-':
      answer=num1-num2;
    break;
    case '*':
      answer=num1*num2;
    break;
    case '/':
      answer=num1/num2;
    break;
    case '%':
      answer=(int)num1%(int)num2;
    break;
    default:
      printf("Incorrect input :)\n");
    break;
    
  }
  
  printf("Answer: %g\n",answer);
  snprintf(log,sizeof(log),"%g%c%g=%g",num1,calc_arg,num2,answer);
  history_append(log);
  done_menu();
  
}