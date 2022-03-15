
#ifndef __STACK_H__
#define __STACK_H__
#include <stdlib.h> // malloc
#include <assert.h> // assert
#include <string.h> // memcpy strdup

typedef struct{
  void *elems;
  int elemSize;
  int logicLen;
  int allocLen;
  void (*freefn)(void *);
} stack;

void StackNew(stack *s,int elemSize, void (*freefn)(void *));
void StackDispose(stack *s);
void StackPush(stack *s,void *elemAddr);
void StackPop(stack *s,void *elemAddr);

#endif
