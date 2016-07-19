//字符对比函数
#include <stdio.h>
#define MAX 100

void readString(char *s1, char *s2);
size_t STRLEN(const char *string);
int STRCMP(char *source, char *dest);

int main(void)
{
	char s1[MAX];
	char s2[MAX];

	readString(s1, s2);

	if (STRCMP(s1, s2) == 0)
	{
		printf("They are equal.\n");
	}
	else
	{
		printf("They are not equal.\n");
	}
	return 0;
}

void readString(char *s1, char *s2)
{
	printf("Please enter the first string(size < 100)\n");
	scanf("%s", s1);
	printf("Please enter the second string(size < 100)\n");
	scanf("%s", s2);
}

size_t STRLEN(const char *string)
{
	size_t count = 0;
	char ch;

	ch = string[count];
	while (ch != '\0')
	{
		count++;
		ch = string[count];
	}
	return count;
}

int STRCMP(char *source, char *dest)
{
	int length1;
	int length2;
	length1 = STRLEN(source);
	length2 = STRLEN(dest);
	if (length1 != length2)
	{
		return -1;
	}
	for (int i = 0; i < length1; i++)
	{
		if (source[i] != dest[i])
		{
			return -1;
		}
	}

	return 0;
}
