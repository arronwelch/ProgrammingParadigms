#include <iostream>
using namespace std;

int main() {
    
    //int before[100]={0};
    int array[10]={0};
    int after[100]={0};//*** stack smashing detected ***: terminated
    array[0] = 44;
    array[9] = 100;
    // array == &array[0]
    // array + k == &array[k]
    // *(array + 0) == array[0]
    // *(array + k) == array[k]
    array[5] = 45;
    array[10] = 1;//error operation in array!!!
    cout << "C and C++ there's no bounce checking" << endl;
    array[25] = 25;//error
    array[-4] = 77;//error
    *(array-4) = 77;
    // How compiler is alloc variable space address?
    int arr[5] = {0};//initial is very important,can avoid other array over-write effect
    arr[3] = 128;
    cout << ((short*)arr)[6] << endl;
    ((short*)arr)[7] = 2;//little endian is different with the lecture vedio
    cout << arr[3] << endl;
    //arr[4] = 0x12345678;
    ((short*)(((char*)(&arr[1]))+8))[3] = 100;

    cout << arr[4] << endl;
/*
arr[4] = 0x12345678;
                             [0x78,0x56,0x34,0x12]                                
                                     \ | | / 
[ | | | ][ | | | ][ | | | ][ | | | ][ | | | ]
          ^                 ^            ^
    (&arr[1])               |            |
        (((char*)(&arr[1]))+8)           |
	((short*)(((char*)(&arr[1]))+8))[3] = 100(0x64,0x00);
arr[4] = [0x78,0x56,0x64,0x00]
0x00645678
6575736
*/
}
