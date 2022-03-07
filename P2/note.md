# c/c++
 - bool
 - char(CAR)   1 byte
 - short       2 byte
 - int         4 byte
 - long        4 byte
 - float       4 byte
 - double      8 byte

binary digit -> bit

 |x|x|x|x|x|x|x|x|
  0 0 0 0 0 0 0 0
  0 0 0 0 0 0 0 1
  ...
  1 1 1 1 1 1 1 1
  ^
  2*2*2* ...   *2
  |-------------|
    total 8 choose
    => (2^8 = 256)

  one'complement:
  -> 0 --- positive
  -> 1 --- negative

  0 1 1 1 1 1 1 1 (2^7-1) =>127
  ...
  0 0 0 0 0 0 1 0 (2)
  0 0 0 0 0 0 0 1 (1)
  0 0 0 0 0 0 0 0 (0)

  0 0 0 0 0 0 0 1 (1)
+ 1 1 1 1 1 1 1 0
-----------------------
  1 1 1 1 1 1 1 1
+               1
-----------------------
1 0 0 0 0 0 0 0 0

  1 1 1 1 1 1 1 1 (-1)
  1 1 1 1 1 1 1 0 (-2)
  ...
  1 0 0 0 0 0 0 1 (-127)
  1 0 0 0 0 0 0 0 (-0) => -128

 > char ch = 'A';
 > short s = ch;
 > cout << s << endl;
 >> 65en