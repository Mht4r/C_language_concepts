/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	//Given a point (x, y), WAP to find out if it lies in the 1st Quadrant,
	//2nd Quadrant, 3rd Quadrant, 4th Quadrant, on the x-axis, y-axis or
	//at the origin, viz. (0, 0).
	int x, y;
	printf ("Enter the x coordinate:");
	scanf("%d",&x);
	printf ("Enter the y coordinate:");
	scanf("%d",&y);

	if(x>0 && y>0) printf ("point lies in first quadrant ");
	if(x<0 && y>0) printf ("point lies in second quadrant ");
	if(x<0 && y<0) printf ("point lies in third quadrant ");
	if(x>0 && y<0) printf ("point lies in fourth quadrant ");
	if(x==0 && y==0) printf ("point lies on origin ");


	return 0;
}