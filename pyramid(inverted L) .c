
#include <stdio.h>

int main()
{
	// inverted left half pyramid
	int u;
	printf("Enter the unit:");
	scanf ("%d",&u);
	for(int i=1; i<=u; i++) {
		for (int j=1; j<=u; j++) {
			if(j<i) printf (" ");
			else printf ("*");

		}
		printf ("\n");
	}


	return 0;
}