
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/*
int main(int argc,char *argv[])
{
	void *memory = malloc(400);
	assert(memory != NULL);
	printf("Yay!\n");
	free(memory);
	return 0;
}
*/

/*
int strlen(char *,int);
int main()
{
	int num = 65 << 8*3;
	int length = strlen((char *)&num,num);
	printf("length = %d\n",length);
	return 0;
}
*/

//int memcmp(const void *s1, const void *s2, size_t n);
/*
int memcmp(void *);
int main()
{
	int n = 17;
	int m = memcmp(&n);
	printf("memcmp = %d\n",m);
	return 0;
}
*/

int main()
{
	int i = 0;
	int a[4] = {0};
//	int i = 0;
	for(i=0;i<=4;i++)
	{
		a[i] = 0;
		printf("a[%d] = %d\n",i,a[i]);
	}

	return 0;
}
