#include <stdio.h>

int main()
{
	int m, n;
	printf("enter the row:");
	scanf("%d",&m);
	printf("enter the column:");
	scanf("%d",&n);
	for(int i=1; i<=m; i++) {
		for(int i=1; i<=n; i++) {
			printf("* ");
		}
		printf("\n");
	}


	return 0;
}