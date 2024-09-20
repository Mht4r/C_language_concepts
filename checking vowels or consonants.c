
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