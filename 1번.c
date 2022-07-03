#include <stdio.h>

int main(void)
{
	int a, b;
	printf("정수 입력: ");
	scanf("%d%d", &a, &b);
	int c = a * b;
	printf("%d*%d=%d\n", a, b, c);

	return 0;
}
