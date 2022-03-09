#include <iostream>
using namespace std;
int main() {
    short s = 1033;//2^10 + 2^3 + 2^0
    int i = s;
    cout <<"short to int:" << i << endl;
    i = 10502151;// 2^23 + 2^21 + 2^14 + 2^2 + 2^1 + 2^0
    s = i;
    cout <<"int to short:"<< s << endl;// 16391
    i =10518535;// 2^23 + 2^21 + 2^15 + 2^2 + 2^1 + 2^0
    s = i;
    cout <<"int to short:(sign?)" << s << endl;//just copy by bit length,and tranfor by "short" rule
}

