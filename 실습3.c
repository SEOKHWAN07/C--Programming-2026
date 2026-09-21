#include <stdio.h>
void pr2_1(void)
{
	int yr, result;
	scanf_s("%d", &yr);

	result = (yr / 4 == 0 && yr / 100 != 0) || yr / 400 == 0;
	printf("%d\n", result);
}

void pr2_2(void)
{
	int amount;
	scanf_s("%d", &amount);

	int won10000 = amount / 10000;
	amount %= 10000;
	int won1000 = amount / 1000;
	amount %= 1000;
	int won100 = amount / 100;
	amount %= 100;
	int won10 = amount / 10;

	printf("10000 : %d, 1000 : %d, 100 : %d, 10 : %d\n", won10000, won1000, won100, won10);
}

int main()
{
	pr2_1();
	pr2_2();
}