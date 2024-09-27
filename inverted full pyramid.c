 
#include <stdio.h>

int main()
{
     // inverted full pyramid
	int n;
	printf("Enter the unit:");
	scanf ("%d",&n);
	for(int i=1; i<=n; i++) {
		for (int j=1; j<=n+1; j++){
      if(j<=i) printf(" ");
		    else printf ("* ");
		}
		printf ("\n");
  }

    return 0;
}