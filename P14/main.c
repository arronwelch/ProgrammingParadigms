#include <stdio.h>

void DeclareAndInitArray();
void PrintArray();

int main()
{
	DeclareAndInitArray();
	PrintArray();
}

void DeclareAndInitArray()
{
	int array[100];
	int i;
	for(i=0;i<100;i++)
		array[i] = i;
}

void PrintArray()
{
	int array[100];
	int i;
	for(i=0;i<100;i++)
		printf("%d\n",array[i]);
}

