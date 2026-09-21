#include <stdio.h>

#define READ  0x01
#define WRITE 0x02
#define EXEC  0x04
void pr1(void)
{
	int total = 7384;
	int hours = total / 3600;
	int minutes = (total % 3600) / 60;
	int seconds = total % 60;

	printf("%d시 %d분 %d초\n", hours, minutes, seconds);

}
void pr2()
{
	int score = 75;
	int attendance = 85;

	int passed = score >= 60 && attendance >= 80;
	printf("%d", passed);
}
void pr3()
{
	unsigned int permission = READ | WRITE;   

	permission |= EXEC;                       

	printf("permission = 0x%02X\n", permission);

	if (permission & READ)  printf("READ 있음\n");
	if (permission & WRITE) printf("WRITE 있음\n");
	if (permission & EXEC)  printf("EXEC 있음\n");
}

int main()
{
	pr1();
	pr2();
	pr3();
}