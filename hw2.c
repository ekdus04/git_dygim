#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double distence;
	printf("Please enter kilometers: ");
	scanf("%lf", &distence);
	printf("%.1fkm is equal to %.1f miles.", distence, distence / 1.609);
	return 0;
}