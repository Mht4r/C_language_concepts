/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	//count the digit
	int n;
	printf("Enter the number:");
	scanf("%d",&n);

	int count=0;
	while(n!=0) {
		n=n/10;
		count++;
	}
	printf("digit: %d",count);

	return 0;
}