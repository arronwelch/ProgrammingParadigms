#include <iostream>
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

int main() {
  int array[] = {1,5,9,-4,0,76};
  int index = lsearch(76,array,sizeof(array)/sizeof(array[0]));
  cout << "index = " << index << endl;
}

