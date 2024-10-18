#include <stdio.h>
int main() {
	// print the triangle of 1121231234

	int n;
	printf("enter the number:");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			printf("%d ", j);
		printf("\n");
	}

	return 0;
}