typedef struct {
  int *elems;
  int logicalLen;
  int allocLength;
} stack;

void StackNew(stack *s);
void StackDispose(stack *s);
void StackPush(stack *s, int value);
int StackPop(stack *s);
