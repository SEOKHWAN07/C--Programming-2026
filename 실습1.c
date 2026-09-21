#include <stdio.h>
void exerc1(void)
{
    double inch, cm;
    scanf("%lf", &inch);

    cm = inch * 2.54;
    printf("%lfinch는 %lfcm입니다.\n", inch, cm);
}

void exerc2(void)
{
    double F, C;
    scanf("%lf", &C);

    F = (C * 1.8) + 32;
    printf("섭씨%lf도는 화씨%lf도 입니다.\n", C, F);
}
void exerc3(void)
{
    double r, area;
    scanf("%lf", &r);

    area = r * r * 3.14;
    printf("%lf의 원의 넓이는 %lf입니다.", r, area);
}
int main()
{
    exerc1();
    exerc2();
    exerc3();
}