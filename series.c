#include <stdio.h>
int main()
{
    // calculate the sum of series 1/2!+2/3!+3/4!......
    int i,j,n;
    float sum=0,fact=1;
    printf("Enter a number until series is to be calculated : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i+1;j++)
        {
            fact=fact*j;
        }
        sum=sum+i/fact;
    }
    printf("The sum of the series is %f ",sum);
    getch();
    return 0;
}
