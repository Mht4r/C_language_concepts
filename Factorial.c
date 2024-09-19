/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	// find the Factorial of number
	int n, i;
	printf("enter the number :");
	scanf("%d",&n);
	int f=1;
	for (i=1;i<=n;i++) {
		f=i*f;
	}
	printf("factorial is: %d",f);





	return 0;
}