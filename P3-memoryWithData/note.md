# CS 107 - Lecture 3  

 ## asterisk and ampersand tricks  

    double d = 3.1416;
    char ch = *(char *)&d;
    cout << ch << endl;
    short s = 45;
    d = *(double *)&s;
    cout << d << endl;  
  
 ## big endian and little endian
    
 ## struct
    struct fraction {
        int num;
        int denum;
    };
    fraction pi;
    pi.num = 3;
    pi.denum = 1415926;
