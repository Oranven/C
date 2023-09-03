#include <stdio.h>
int main()
{   
	int time1;
	int time2;
	scanf_s("%d %d", &time1, &time2);

	int a = time1 / 100 + time2 / 60;
	int b = (time1 / 100.0 - time1 / 100) * 100 + time2 % 60;
	printf("%lf", (a + b / 60 + b % 60 / 100.0) * 100.0);

	return 0;
}