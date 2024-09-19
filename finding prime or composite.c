#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int check = 1; // 1 means prime
	for(int i=2; i<=n/2; i++) {
		if(n%i==0) {
			check = 0; //0 means composite
			break;
		}
	}
	if(n==1) printf("%d is neither prime nor composite",n);
	else if(check==1) printf("%d is Prime",n);
	else printf("%d is Composite",n);
	return 0;
}
