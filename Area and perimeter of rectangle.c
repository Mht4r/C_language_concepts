#include<stdio.h>

int main()
{
    //area and perimeter of rectangle
    int l, b, a, p;
    printf("Enter the length of rectangle:");
    scanf ("%d",&l);
    printf("Enter the breath of rectangle:");
    scanf ("%d",&b);
    a = l*b;
    printf ("Area of rectangle: %d",a);
    p = 2*(l+b);
    printf ("\nperimeter of rectangle: %d",p);

    return 0;
}