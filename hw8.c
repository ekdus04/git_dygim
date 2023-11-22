#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double stdDeviation(int ary[5])
{
	int mean = 0, result = 0;
	for (int i = 0; i < 5; i++)
	{
		mean += ary[i];
	}
	mean /= 5;
	for (int i = 0; i < 5; i++)
	{
		result += pow(ary[i] - mean, 2);
	}
	result /= 5;
	return sqrt(result);
}
int main(void)
{
	int arr[5];
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Standard Deviation = %.3f", stdDeviation(arr));
	return 0;
}