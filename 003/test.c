#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check_pass(char *input){
  char pass[0x30];
  strcpy(pass, input);
  if(strcmp(pass, "abcdefgh") == 0) return 1;
  return 0;
}

int main(int argc, char *argv[]){
  if(argc < 2){
    printf("Enter the password as an argument.\n");
    exit(0);
  }

  if(check_pass(argv[1])){
    printf("Correct!\n");
  }else{
    printf("Incorrect!\n");
  }

}
