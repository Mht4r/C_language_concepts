/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	//swaping
	float a, b;
	printf("Enter the first number ");
	scanf ("%f",&a);
	printf("Enter the second number ");
	scanf("%f",&b);
	a = a-b;
	b = a+b;
	a = b-a;
	printf ("after swaping first number is %f",a);
	printf("after swaping second number is %f",b);


	return 0;
}