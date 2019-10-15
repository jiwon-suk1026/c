#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x = 0;
	printf(" 4자리 정수 입력 :", x);
	scanf("%d", &x);
	printf(" %10d\n", x);
	printf("%010d %s\n ", x);
	printf("%+010d %s\n\n", x);
	printf("%-10d\n", x);

	printf("%10o\n", x);
	printf("%010o\n", x);
	printf("%10x\n", x);
	printf("%0#10x\n", x);

	return 0;
}