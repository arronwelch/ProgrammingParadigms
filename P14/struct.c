
#include <stdio.h>

struct base {
	int code;
};

struct type_one {
	int code;
	int type_first;
};

struct type_two {
	int code;
	int type_second;
};

int main(void)
{
	struct base a;
	a.code = 1234;
	struct type_one* b = (struct type_one*)&a;
	printf("struct type_one b->code = %d\n", b->code);
	a.code = 5678;
	struct type_two* c = (struct type_two*)&a;
	printf("struct type_two c->code = %d\n", c->code);

	return 0;
}
