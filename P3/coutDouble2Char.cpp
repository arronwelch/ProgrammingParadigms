#include <iostream>
using namespace std;

int main() {
    double d = 3.1416;
    char ch = *(char*)&d;
    cout << ch << endl;
    short s = 45;
    double dd = *(double *)&s;
    cout << dd << endl;
}    
