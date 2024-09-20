 
#include <stdio.h>

int main()
{
    // program to check positive, negative or zero
    int n;
    printf("Enter the number:");
    scanf ("%d",&n);
    if(n>0) printf("number is positive");
    else if(n==0) printf ("number is zero");
    else printf ("number is negative");

    return 0;
}