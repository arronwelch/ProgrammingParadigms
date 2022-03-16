#include <string.h>

void rotate(void *front, void *middle, void *end)
{
  int frontSize = (char *)middle - (char *)front;//calc the physical address
  int backSize = (char *)end - (char *)middle;  
  char buffer[frontSize];
  memcpy(buffer,front,frontSize);
  menmove(front,middle,backSize);
  mencpy((char*)end-frontSize,buffer,frontSize);
}
