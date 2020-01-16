#include <stdio.h>
int main()
{
    //factorial of a number using for loops
    int fact=1,N,i;
    printf("Enter a number to check its factorial : ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is %d ",N,fact);
    return 0;
}
