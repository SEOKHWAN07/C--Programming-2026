#include <stdio.h>
int main(void)
{
	int mdterm, fnalexam, assignment;

	scanf_s("%d %d %d", &mdterm, &fnalexam, &assignment);

	double score = mdterm * 0.3 + fnalexam * 0.4 + assignment * 0.3;
	
	printf("weighted_score = %.2f\n", score);

	return 0;
}