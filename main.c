#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu();
void exec_task(int arg);
void calculator();
void temperature();
void random_num();
void counter();
void done_menu();



void clear(){
  
  //checks for system and clears accordingly
  #ifdef _WIN32
    system("cls");
  #else
    //assumes POSIX system(linux,macos,unix)
    system("clear");
  #endif
}

int main(){
  menu();
}

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

void calculator(){
  float num1,num2,answer;
  char calc_arg;
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
  done_menu();
  
}

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
    printf("Answer: %g°F ");

  }
  else if(arg==2){

  }
  else{
    clear();
    menu();
  }
}

void random_num(){

 	int answer;
	answer=rand();
	for(int i=0;i<5;i++)
	{
		printf("\n");
	}
	printf("Random number: %d",answer);
	for(int i=0;i<5;i++){
		printf("\n");
	}
}

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
