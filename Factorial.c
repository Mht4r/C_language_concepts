#include <stdio.h>

int main()
{
	// find the Factorial of number
	int n, i;
	printf("enter the number :");
	scanf("%d",&n);
	int f=1;
	for (i=1;i<=n;i++) {
		f=i*f;
	}
	printf("factorial is: %d",f);

	return 0;
}
