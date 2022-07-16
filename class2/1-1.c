#include<stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	if (num % 2 == 0)
		printf("even");
	else
		printf("not even");

	return 0;
}