#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", a);
	//��������    (foot+inch/12)*0.3048  1foot-=12inch

	double b = a / 100.0 / 0.3084;
	int inch = 12*b / 145;
	int foot = inch / 12;
	inch = inch % 12;
	printf("%d,%d", foot, inch);
	//��� Ӣ�� Ӣ��
	return 0;
}