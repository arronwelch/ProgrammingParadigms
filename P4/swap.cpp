#include <iostream>
#include <cstring>
using namespace std;

void swap(void* vp1,void*vp2,int size)
{
  char buffer[size];
  memcpy(buffer,vp1,size);
  memcpy(vp1,vp2,size);
  memcpy(vp2,buffer,size);
}

int main() {
  int x = 17;
  int y = 37;
  swap(&x,&y,sizeof(int));
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  double pi = 3.1415;
  double e =  2.7182;
  swap(&pi,&e,sizeof(double));
  cout << "pi = " << pi << endl;
  cout << "e = " << e << endl;
  int i = 0x12345678;
  short s = 0xABCD;
  swap(&i,&s,sizeof(short));
  cout << "i = " << i << endl;
  cout << "s = " << s << endl;
  char *husband = strdup("Fred");
  char *wife = strdup("Wilma");
  swap(&wife,&husband,sizeof(char*));
  cout << "in 64-bit system pointer variable size is:"<< sizeof(char*) << endl;
  cout << "husband = " << husband << endl;
  cout << "wife = " << wife << endl;
  swap(wife,husband,sizeof(char)*4);
  cout << "husband = " << husband << endl;
  cout << "wife = " << wife << endl;
  //swap(wife,&husband,sizeof(char*));//egmentation fault (core dumped)
  //cout << "husband = " << husband << endl;
  //cout << "wife = " << wife << endl;
}

