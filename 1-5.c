#include<stdio.h>

int main(void)
{
	int n, k;
	int c = 0;
	int i;
	scanf("%d %d", &n, &k);

	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			c++;
		if (c == k)
			break;

	}
	if (i <= n)printf("%d", i);
	else printf("0");

	return 0;
}