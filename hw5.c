#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int binary(int x)
{
	int r;
	r = x % 2;
	if(x == 0)
	{
		return 0;
	}
	else 
	{
		printf("%d", r);
		return r + 10 * binary(x / 2);
	}
	
}
int main(void)
{
	int n;
	printf("Please enter a number: ");
	scanf("%d", &n);
	printf("\n%d", binary(n));
	return 0;
}