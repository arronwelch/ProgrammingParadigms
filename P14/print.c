
int printf(const char *format, ...);

int main()
{
	int a = printf("Hello\n");
	int b = printf("%d + %d = %d\n",4, 4, 8);
//	int c = printf("%s + %s = %s\n",4, 4, 8);
	int c = printf("%*d\n", 2, 6);
	printf("a = %d, b = %d, c = %d\n",a,b,c);

	return 0;
}
