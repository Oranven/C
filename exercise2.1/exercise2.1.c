#include <stdio.h>
int main()
{
	int cm;
	scanf_s("%d", &cm);
	// ‰»Î¿Â√◊    (foot+inch/12)*0.3048  1foot-=12inch  foot=5

	int foot = cm / 30.48;
	int inch = (cm / 30.48 - foot) * 12;
	printf("%d %d\n", foot, inch);

	return 0;
}