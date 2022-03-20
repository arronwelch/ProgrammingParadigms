
#include <stdio.h>

int foo()
{
	int a[4];
	int i;
	for(i=0;i<=4;i++)
		a[i] -= 8;
	
	return 0;
}


int main()
{
	foo();
	
	getchar();
	return 0;
}
