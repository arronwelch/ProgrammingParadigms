#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

void StringFree(void *elem)
{
  free(*(char **)elem);
}

int main(int argc, char *argv[]) {
  const char *friends[] = {"Al","Bob","Carl"};
  stack stringStack;
  StackNew(&stringStack,sizeof(char *), StringFree);
  for(int i=0;i<3;i++) {
    char *copy = strdup(friends[i]);// strdup used malloc, so need free!!!
    StackPush(&stringStack,&copy);// [NOTICE!!!] the elem is (char **)
  }
  //...
  for(int i=0;i<2;i++) {
    char *name = NULL;
    StackPop(&stringStack,&name);
    printf("[%d] stack pop : %s\n",i,name);
    free(name);// ???
  }
  StackDispose(&stringStack);
  return EXIT_SUCCESS;
}
