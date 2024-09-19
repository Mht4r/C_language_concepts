#include <stdio.h>
#include<math.h>

int main()
{
	//Compound interest
	int p, r, n, a, ci;
	printf("Enter the principal:");
	scanf ("%d",&p);
	printf("Enter the rate:");
	scanf ("%d",&r);
	printf("Enter the time in years:");
	scanf ("%d",&n);
	a = p*pow(1+r/n, n);
	ci = a-p;
	printf ("compound interest: %d",ci);


	return 0;
}