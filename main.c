/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
