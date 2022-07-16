#include<stdio.h>

int main(void)
{
	int num, i, c = 0;

	
	scanf("%d", &num);

	for (i = 2; i < num; i++) {
		if (num % i == 0)
			break;

	};
	if (i == num) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	
	return 0;
}