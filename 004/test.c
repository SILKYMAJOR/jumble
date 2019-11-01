#include <stdio.h>
#include <stdlib.h>

void shell(){
  system("/bin/bash");
}

int main(){
  printf("What's your name?\n");

  char buf[0x10];
  scanf("%s", buf);

  printf("Hello. %s!\n", buf);
  return 0;
}
