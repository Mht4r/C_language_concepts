/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	float a, b, p;
	printf("Enter the first number: ");
	scanf("%f", &a);
	printf("\nEnter the second number: ");
	scanf("%f",&b);
	p = a*b;
	printf("\nAns is: %f",p);

	return 0;
}