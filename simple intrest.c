
#include <stdio.h>

int main()
{
    //calculating simple intrest
    int si, p, r, t;
    printf("Enter the principle:");
    scanf ("%d",&p);
    printf("Enter the rate:");
    scanf ("%d",&r);
    printf("Enter time:");
    scanf ("%d",&t);
    si = (p*r*t)/100;
    printf ("simple intrest: %d",si);

    return 0;
}