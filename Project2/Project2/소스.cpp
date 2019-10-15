#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	float a, b, c;

	printf(" 섭씨온도 3개를 입력하시오.\n");
	scanf("%f, %f, %f", &a, &b, &c);

	//F = (9.0 / 5.0) * C + 32.0;

	printf("화씨온도는 %4.f도 이다.", a, (0.9 / 0.5) * a + 32.0);
	printf("화씨온도는 %4.f도 이다.", b, (0.9 / 0.5) * b + 32.0);
	printf("화씨온도는 %4.f도 이다.", c, (0.9 / 0.5) * c + 32.0);
}