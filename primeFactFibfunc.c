#include <stdio.h>
#include <stdlib.h>
int fact(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    printf("factorial is %d ",fact);
}
int prime(int x)
{
    int i;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            printf("it is not a prime number");
            return 0;
        }
    }
    printf("it is prime number");
}
int fibo(int x)
{
    int pre=0,cur=1,i,temp;
    printf("%d\t%d\t",pre,cur);
    for(i=3;i<=x;i++)
    {
        temp=cur;
        cur=pre+cur;
        pre=temp;
        printf("%d \t",cur);
        
    }
}
int main()
{

    int n;
    int x;
    printf("Please Enter a number to check it's prime,factorial and fibonacci");
    scanf("%d",&n);
    fibo(n);
    prime(n);
    fact(n);
    printf("Enter a number to exit");
    scanf("%d",&x);
}
