#include <stdio.h>

int main()
{
	//Sum of only even digit
	int n, x;
	printf("Enter the number :");
	scanf("%d",&n);

	int sum=0;
	while(n>0) {
		int ld=n%10;
		if(ld%2==0) x=ld;
		n=n/10;
		sum=sum+x;
	}

	printf("sum of digit : %d",sum);


	return 0;
}
