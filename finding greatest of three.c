/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	// Find largest number among three numbers
	int a, b, c;
	
	printf("Enter the first number:");
	scanf ("%d",&a);
	printf("Enter the second number:");
	scanf ("%d",&b);
	printf("Enter the third number:");
	scanf ("%d",&c);
	
	if(a>b) {
		if(a>c) printf ("largest number is %d",a);
		else printf("largest number is %d",c);
	}
	else {
		if(b>c) printf ("largest number is %d",b);
		else printf ("largest number is %d",c);
	}
	return 0;
}