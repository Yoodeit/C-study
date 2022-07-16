#include<stdio.h>

int main(void)
{
	int num;
	int limit;
	int result;

	result = 0;
	
	scanf("%d", &limit);


	for (num = 1; num <= limit; num++) {
		if (num % 2 == 0)
			result += num;
	}

	printf("%d", result);
	
	return 0;
}