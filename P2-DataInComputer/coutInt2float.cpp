#include <iostream>
using namespace std;

int main() {
  int i = 37;
  float f = *(float *)&i;
  cout << f << endl;
  f = 7.0;
  short s = *(short*)&f;
  cout << s << endl;
  i = *(int*)&f;
  cout << i << endl;
}
