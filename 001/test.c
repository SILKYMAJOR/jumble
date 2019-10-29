#include <stdio.h>

int main(){
  printf("What's your name?\n");

  char buf[0x30];
  scanf("%s", buf);

  printf("Hello. %s!\n", buf);
  return 0;
}
