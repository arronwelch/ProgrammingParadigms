#include <stdio.h>
#include "stack.h"

int main() {
  double top = 0.0;
  stack s;
  StackNew(&s,sizeof(double));
  for(int i=0;i<5;i++) {
    top = i;
    printf("[%d] stack push : %lf\n",i,top);
    StackPush(&s,&top);
  }
  //...
  for(int i=0;i<5;i++) {
    StackPop(&s,&top);
    printf("[%d] stack pop : %lf\n",i,top);
  }
  StackDispose(&s);
  return 0;
}
