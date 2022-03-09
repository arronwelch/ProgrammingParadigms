# c/c++
 - bool
 - char(CAR)   1 byte
 - short       2 byte
 - int         4 byte
 - long        4 byte
 - float       4 byte
 - double      8 byte

  ## binary digit -> bit

     |x|x|x|x|x|x|x|x|
      0 0 0 0 0 0 0 0
      0 0 0 0 0 0 0 1
      ...
      1 1 1 1 1 1 1 1
      2*2*2*2 .... *2
      |-------------|
      total 8 choose => (2^8 = 256)
  ## one'complement:
    -> 0 --- positive
    -> 1 --- negative
       0 0 0 0 0 0 0 1 (1)
       1 1 1 1 1 1 1 0 (reserve)
     + 1 1 1 1 1 1 1 1
     +               1 (add one)
     ----------------------
    (1)0 0 0 0 0 0 0 0 (get rangeOver)

    0 1 1 1 1 1 1 1 (2^7-1) =>127
    ...
    0 0 0 0 0 0 1 0 (2)
    0 0 0 0 0 0 0 1 (1)
    0 0 0 0 0 0 0 0 (0)
    1 1 1 1 1 1 1 1 (-1)
    1 1 1 1 1 1 1 0 (-2)
    ...
    1 0 0 0 0 0 0 1 (-127)
    1 0 0 0 0 0 0 0 (-2^7) => -128

 ## coutChar.cpp:
    #include <iostream>
    using namespace std;
    int main() {
        char ch = 'A';
        short s = ch;//65
        cout << s << endl;
        ch = s + 2;//67
        cout << ch << endl;
    }
    //test output >> 65
    //            >> C
 ## coutShort.cpp:
    #include <iostream>
    using namespace std;
    int main() {
        short s = 1033;//2^10 + 2^3 + 2^0
        int i = s;
        cout << i << endl;
        i = 10502151;// 2^23 + 2^21 + 2^14 + 2^2 + 2^1 + 2^0
        s = i;
        cout << s << endl;// 16391
    }
 ## Fixed-point - a method of representing fractional(non-integer)
    2^0 2^(-1) 2^(-2) 2^(-3) 2^(-4) ...
    1   0.5    0.25   0.125  0.0625
 ## float(floating point number):
    |sign|   exp     |fractional parts|
     ^1bit   ^8bit        ^23bit(start 2^(-1) integer fixed is 1)
    calc-style:
       (-1)^s * 1.f * 2^(exp - 127)

