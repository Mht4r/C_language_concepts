   #include <stdio.h>

int main()
{
 	// print solid square of 111..
	int s;
	printf("Enter the side:");
	scanf ("%d",&s);
	for(int i=1; i<=s; i++) {
		for (int j=1; j<=s; j++){
		    printf ("%d ",i);
		}
		printf ("\n");
	}

    return 0;
}