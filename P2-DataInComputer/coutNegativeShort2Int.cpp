    #include <iostream>
    using namespace std;
    int main() {
        short s = -1;// 1111_1111_1111_1111 in real number representation in computer memory actually
        int i = s;
        cout << i << endl;//sign extension,positive is zero,negative is one.
    }
