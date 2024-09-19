 #include <stdio.h>

int main()
{
	//count the digit
	int n;
	printf("Enter the number:");
	scanf("%d",&n);

	int count=0;
	while(n!=0) {
		n=n/10;
		count++;
	}
	printf("digit: %d",count);

	return 0;
}
