#include "include/header.h"

void clear(){
  
  //checks for system and clears accordingly
  #ifdef _WIN32
    system("cls");
  #else
    //assumes POSIX system(linux,macos,unix)
    system("clear");
  #endif
}