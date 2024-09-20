/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	// checking vowels or consonants
	char ch, a, e, i, o, u;
	printf("Enter the character:");
	scanf ("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {

		printf("%c is vowels",ch) ;
	}
	else printf ("%c is consonants",ch);


	return 0;
}