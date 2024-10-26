#include <stdio.h>

int num(int a, int b) {
	int c,d;
	for(int i=1; i<=b; i++) {
		printf(" %d ",i);
	}
	return 0;
}


int main()
{
//numbers between intervals
	int a=1;
	int b=9;
	int c=num(a,b);

	return 0;
}