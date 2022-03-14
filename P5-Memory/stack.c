#include <stack.h>
#include <stdlib.h>
#include <assert.h>

void StackNew(stack *s) 
 {
  s->logicalLen = 0;
  s->allocLength = 4;
  s->elems = malloc(s->allocLength * sizeof(int));
  assert(s->elems != NULL);
}

void StackDispose(stack *s)
{
  free(s->elems);
}

void StackPush(stack *s,int value)
{
  if(s->logicalLen == s->allocLength) {
    s->allocLength *= 2;
    s->elems = realloc(s->elems,s->allocLength * sizeof(int));
    assert(s->elems != NULL);
  }
  s->elems[s->logicalLen] = value;
  s->logicalLen++;
}

int StackPop(stack *s)
{
  assert(s->logicalLen > 0);
  s->logicalLen--;
  return s->elems[s->logicalLen];
}
