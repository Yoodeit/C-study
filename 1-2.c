#include<stdio.h>

int main(void)
{
	int slot1, slot2, slot3, slot4, sum;

	scanf("%d %d %d %d", &slot1, &slot2, &slot3, &slot4);

	sum = slot1 + slot2 + slot3 + slot4;

	if (sum == 1) {
		printf("A");
	}
	else if (sum == 2) {
		printf("B");
	}
	else if (sum == 3) {
		printf("C");
	}
	else if (sum == 4) {
		printf("D");
	}
	else {
		printf("E");
	}
	return 0;
}