
#include <stdio.h>

int main()
{
	// Reverse the number
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	int r=0;
	while (n>0) {
		int ld=n%10;
		n=n/10;
		r=r*10;
		r=r+ld;
	}
	printf("reverse of the number is :%d",r);


	return 0;
}