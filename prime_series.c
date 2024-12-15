#include <stdio.h>

int main()
{
	int prime;
	for(int i=2; i<=100; i++) {
		prime=1;
		for(int j=2; j<=i/2; j++) {
			if(i%j==0) prime=0;
		}
		if(prime==1) printf("%d\n",i);
	}

	return 0;
}