#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	float a, b, c;

	printf(" �����µ� 3���� �Է��Ͻÿ�.\n");
	scanf("%f, %f, %f", &a, &b, &c);

	//F = (9.0 / 5.0) * C + 32.0;

	printf("ȭ���µ��� %4.f�� �̴�.", a, (0.9 / 0.5) * a + 32.0);
	printf("ȭ���µ��� %4.f�� �̴�.", b, (0.9 / 0.5) * b + 32.0);
	printf("ȭ���µ��� %4.f�� �̴�.", c, (0.9 / 0.5) * c + 32.0);
}