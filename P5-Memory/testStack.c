#include <stdio.h>
#include "stack.h"

int main() {
  stack s;
  StackNew(&s);
  for(int i=0;i<5;i++) {
    printf("[%d]StackPush value = %d\n",i,i);
    StackPush(&s,i);
  }
  for(int i=0;i<4;i++) {
    printf("[%d]StackPop value = %d\n",i,StackPop(&s));
  }
  StackDispose(&s);

  return 0;
}
