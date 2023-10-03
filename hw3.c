#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	for (int n = 1; n <= 5; n++) 
	{
		for (int i = 1; i <= 5 - n; i++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2*n-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}