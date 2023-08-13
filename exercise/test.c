#include <stdio.h>
int main()
{
	int hour1, minutes1;
	int hour2, minutes2;
	
	scanf_s("%d %d", &hour1,&minutes1);
	scanf_s("%d %d", &hour2,&minutes2);

	int t1 = hour1 * 60 + minutes1;
	int t2 = hour2 * 60 + minutes2;
	int t = t2 - t1;

	printf("现在的时差是%d h %d min。", t / 60, t % 60);

	return 0;
}