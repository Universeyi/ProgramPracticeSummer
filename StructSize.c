//结构体字符输出函数
#include <stdio.h>

struct s
{
	char c1;
	char c2;
	char c3[2];
	short s1;
	double d;
	int i;
};

int main(void)
{
	struct s test;
	size_t length;

	length = sizeof(test);
	printf("The smallest size of the struct body is %d bytes.\n", length);
	return 0;
}
