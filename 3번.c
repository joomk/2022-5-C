#include <stdio.h>

int main(void)
{
	double a, b;
	double c = a / b;
	printf("�Ǽ� �Է� : ");
	scanf("%.2lf/%.2lf=", &a, &b);
	printf("%.2lf/%.2lf=%.2lf\n", a, b, c);

	return 0;
}