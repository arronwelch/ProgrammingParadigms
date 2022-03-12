#include <iostream>
#include <string.h>

using namespace std;

struct student{
    char *name;
    char suid[8];
    int numUnits;
};

student pupils[4];

void swap(int *ap, int *bp) {
    int temp = *ap;
    *ap = *bp;
    *bp = temp;
}

int main() {
  pupils[0].numUnits = 21;
  pupils[2].name = strdup("Admam");
  pupils[3].name = pupils[0].suid + 6;
  strcpy(pupils[1].suid,"40415xx");
  strcpy(pupils[3].name,"123456");
  pupils[7].suid[11] = 'A';
  int x = 7;
  int y = 117;
  swap(&x,&y);
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
}

