#include <stdio.h>

void foo()
{
    int array[4];
    int i;
    for(i=0;i <=6; i++)
        array[i] -= 8;
}

int main()
{
    foo();
    getchar();
    return 0;
}
