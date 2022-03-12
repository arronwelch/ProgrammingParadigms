#include <iostream>
#include <cstring>
using namespace std;

int lsearch(int key, int array[], int size)
{
  for(int i = 0; i < size; i++) {
    if(array[i] == key) {
      return i;
    }
  }
  return -1;
}

void *Lsearch(void *key,void *base,int n,int elemSize)
{
  for(int i=0;i<n;i++) {
    void *elemAddr = (char*)base + i*elemSize;//seduce this base to one character(1byte)
    //only this can do pointer arithmatic,caompiler need know the "unit"
    if(memcmp(key,elemAddr,elemSize)==0)
      return elemAddr;
  }
  return NULL;
}

int main() {
  int array[] = {1,5,9,-4,0,76};
  int index = lsearch(76,array,sizeof(array)/sizeof(array[0]));
  cout << "index = " << index << endl;
  int key = 76;
  cout << *((int*)(Lsearch(&key,array,sizeof(array)/sizeof(array[0]),sizeof(int)))) << endl;
}

