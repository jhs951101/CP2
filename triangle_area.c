#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float width, height;
	float area;

	printf("삼각형의 밑변: ");
	scanf("%f", &width);

	printf("삼각형의 높이: ");
	scanf("%f", &height);

	area = width * height / 2;
	printf("삼각형의 넓이: %f\n", area);

	return 0;
}
