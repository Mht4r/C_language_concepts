 
#include <stdio.h>

int main()
{
     	// print triangle
	int u;
	printf("Enter the unit:");
	scanf ("%d",&u);
	for(int i=1; i<=u; i++) {
		for (int j=1; j<=u; j++){
		    if(j<=u-i) printf ("  ");
		    else printf ("* ");
		}
		printf ("\n");
	}
    return 0;
}