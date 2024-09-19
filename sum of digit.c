#include <stdio.h>

int main()
{
    //Sum of digit
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    
    int sum=0;
    while(n>0){
        int ld=n%10;
        n/=10;
        sum=sum+ld;
    }
    
    printf("sum of digit : %d",sum);
    

    return 0;
}
