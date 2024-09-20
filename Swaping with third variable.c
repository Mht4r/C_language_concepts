 
#include <stdio.h>

int main()
{
	// swaping with third variable
	int a, b, x;
	printf("Enter a:");
	scanf ("%d",&a);
	printf("Enter b:");
	scanf ("%d",&b);
	x=b;
	b=a;
	a=x;
	printf ("After the swaping a: %d",a);
	printf ("\nAfter the swaping b: %d",b);

	return 0;
}
