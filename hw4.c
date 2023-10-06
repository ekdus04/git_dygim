#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int prime = 1;
	int i = 2;
	printf("Please enter a number: ");
	scanf("%d", &n);

	// 소수 판별하기
	while (i * i <= n)
	{
		if (n % i == 0)
		{
			prime = 0;
			break;
		}
		i++;
	}
	if (prime)
		printf("It is a prime number.");
	else
		printf("It is not a prime number.");
	return 0;
}