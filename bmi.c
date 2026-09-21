#include <stdio.h>

int main(void)
{
	double m, kg;

	scanf_s("%lf %lf", &m, &kg);

	double bmi = kg / (m * m);

	printf("bmi = %.2f", bmi);

	return 0;
}