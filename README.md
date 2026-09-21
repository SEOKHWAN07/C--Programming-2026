1. 성적 가중평균
#include <stdio.h>
int main(void)
{
	int mdterm, fnalexam, assignment;

	scanf_s("%d %d %d", &mdterm, &fnalexam, &assignment);

	double score = mdterm * 0.3 + fnalexam * 0.4 + assignment * 0.3;
	
	printf("weighted_score = %.2f\n", score);

	return 0;
}
결과 = weighted_score = 90.00

2. BMI 계산
#include <stdio.h>

int main(void)
{
	double m, kg;

	scanf_s("%lf %lf", &m, &kg);

	double bmi = kg / (m * m);

	printf("bmi = %.2f", bmi);

	return 0;
}
결과 = bmi = 22.49
