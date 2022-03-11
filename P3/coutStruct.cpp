#include <iostream>
using namespace std;

struct fraction {
    int num;
    int denum;
};

fraction pi;

int main() {
    pi.num = 22;
    pi.denum = 7;
    cout << "pi.denum = " << pi.denum << endl;
    ((fraction*)&(pi.denum))->num = 12;
    cout <<"pi.denum = " << pi.denum << endl;
    ((fraction*)&(pi.denum))->denum = 33;
    cout << "((fraction*)&(pi.denum))[0].denum = " << ((fraction*)&(pi.denum))[0].denum << endl;
    cout << "(&pi)[1].num = " << (&pi)[1].num << endl; 
}
