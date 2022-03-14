#include <stdlib.h> // malloc free realloc
#include <assert.h> // assert
#include <string.h> // memcpy
#include "stack.h"

void StackNew(stack *s,int elemSize)
{
  assert(elemSize > 0);
  s->elemSize = elemSize;
  s->logicLen = 0;
  s->allocLen = 4;
  s->elems = (char *)malloc( s->allocLen * s->elemSize);
  assert(s->elems != NULL);
}

void StackDispose(stack *s)
{
  free(s->elems);
}

static void StackGrow(stack *s)
{
  s->allocLen *= 2;
  s->elems = realloc(s->elems, s->allocLen * s->elemSize);
  assert(s->elems != NULL);
}

void StackPush(stack *s, void *elemAddr)
{
  if(s->logicLen == s->allocLen)
    StackGrow(s);
  void *target = (char *)s->elems + s->logicLen * s->elemSize;
  memcpy(target,elemAddr,s->elemSize);
  s->logicLen++;
}

void StackPop(stack *s, void *elemAddr)
{
  assert(s->logicLen > 0);
  void *source = (char *)s->elems + (s->logicLen - 1) * s->elemSize;
  memcpy(elemAddr,source,s->elemSize);
  s->logicLen--;
}
